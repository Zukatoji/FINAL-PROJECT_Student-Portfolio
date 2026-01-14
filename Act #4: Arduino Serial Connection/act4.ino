#define photoResistorPin A2
#define ledPin 8
const int lightThreshold = 220;
String currentCommand = "";
bool ThresholdMet = false;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(photoResistorPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()) {
    
    currentCommand = Serial.readStringUntil('\n');
    Serial.println("Analyzing command...");
    delay(3000); 
    currentCommand.toLowerCase();

    if (currentCommand == "stop") {
      ThresholdMet = false;      
      digitalWrite(ledPin, LOW); 
      Serial.println("Stopped Successfully");
      delay(2000);
    } else {
      Serial.print("Unknown command: '");
      Serial.print(currentCommand);
      Serial.println("'. Resuming...");
      delay(2000);
    }
    currentCommand = "";
  } else {
    
    int light = analogRead(photoResistorPin);
    int mappedLight = map(light, 0, 1023, 0, 255);
    Serial.print("L: ");
    Serial.println(mappedLight);
    delay(500);
    
    if (mappedLight >= lightThreshold) {
      ThresholdMet = true;
    } 
    if (ThresholdMet){
      digitalWrite(ledPin, HIGH);
      delay(100);
      digitalWrite(ledPin, LOW); 
      delay(100);
    }
  }
}