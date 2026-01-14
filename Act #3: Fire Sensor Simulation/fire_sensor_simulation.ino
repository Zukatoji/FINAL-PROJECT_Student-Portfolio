#define thermistorPin A0
#define photoResistorPin A2
#define ledPin 12   

const int tempThreshold = 50;  
const int lightThreshold = 220;

const float beta = 3950.0; 
const float resistance = 10;
const float roomTemp = 298.15; 



void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float temp = getTemp();
  int light = analogRead(photoResistorPin);

  Serial.print("T: ");
  Serial.print(temp);
  Serial.print(" deg C | L: ");
  Serial.println(light);

  
  if (temp >= tempThreshold && light >= lightThreshold) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(200);
}

float getTemp() {
  int analogValue = analogRead(thermistorPin);

  float resist = resistance * (1023.0 / analogValue - 1.0);
  float tempK = 1.0 / ((1.0 / roomTemp) + (1.0 / beta) * log(resist / resistance));
  float tempC = tempK - 273.15;

  return tempC;
}