#include <Arduino.h>

const int analogPin = A0;
const int ledPin = 2;

void setup( ) {
  Serial.begin(115200);
  delay(1000);
  analogWriteRange(255);
}

void loop( ) {
  int vrValue = analogRead(analogPin);
  float Voltage = vrValue * (1.0 / 1023.0);
  int percentage = map(vrValue, 0, 1023, 0, 100);
  analogWrite(ledPin, percentage);


  Serial.print("Raw Value: ");
  Serial.print(vrValue);
  Serial.print(" (");
  Serial.print(percentage);
  Serial.print("%)");
  Serial.print("  ,  ");
  Serial.print("Volatge: ");
  Serial.print(Voltage);
  Serial.println("V");

  delay(500);
}
