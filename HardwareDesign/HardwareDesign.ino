#include <SPI.h>
#include <Wire.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println("lol");
  unsigned int airnoise = analogRead(A0);
  Serial.println(airnoise);
  
  

}
