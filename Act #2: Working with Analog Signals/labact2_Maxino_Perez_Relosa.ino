int leds[] = {12, 11, 10, 9, 8};  

void setup() {
  
  int led = 0;
  while (led < 5) {
    pinMode(leds[led], OUTPUT);
    led++;
  }
}

void loop() {
  
  int led = 0;
  while (led < 5) {
    int brightness = 0;
    while (brightness <= 255) {
      analogWrite(leds[led], brightness);
      brightness++;
      delay(1);
    }
    delay(1000);
    led++;  
  }

  led = 0;
  while (led < 5) {
    int brightness = 255;
    while (brightness >= 0) {
      analogWrite(leds[led], brightness);
      brightness--;
      delay(1);
    }
    delay(1000);
    led++;  
  }
}
