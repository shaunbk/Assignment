#include <SoftwareSerial.h>

const int ledPin = 11;
const int soilPin = 20;
#define rxPin 7 // Teensy pin 7 
#define txPin 8 // Teensy pin 8 
void setup() {
// initialize the digital pin as an output.
pinMode(ledPin, OUTPUT);
Serial.begin(9800);
  Serial1.begin(9600); // enable Bluetooth module

}
void loop() {
  
    int val = analogRead(soilPin);

    Serial.print("Soil Moisture: ");
    //print moisture percent
    Serial.print(val);
    Serial.println("%");  
    Serial1.print("Soil Moisture: ");
    Serial1.println(val);
    delay(1000);
}