/*
 DC Motor Control 

 This program drives a brush and brushless DC motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor spins at Full rotation speed for 2 seconds,
 then half the rotation speed for 2 seocnds,
 and then no movement from motor for 2 seconds. 

 Created November 7, 2019
 by Tyler Adam Martinez 

 */
  int full = 1;
  int half = 255/2;
  int off = 0;
 
void setup() {
  // ALL the pins are PWM 
  pinMode(3, OUTPUT); // VCC CW loop 
  pinMode(9, OUTPUT); //GND CW loop
  pinMode(10, OUTPUT); //VCC CCW loop
  pinMode(11, OUTPUT); //GND CCW loop 

  // Serial 
  Serial.begin(9600);
}

void loop() {
  //Full speed CW loop
  Serial.println("full speed");
  digitalWrite(3, full);
  digitalWrite(9, full);
  delay(2000); //2 seconds 

  //Half speed CW loop 
  Serial.println("half speed");
  analogWrite(3, half);
  analogWrite(9, half);
  delay(2000);

  //off 
  Serial.println("motor off");
  digitalWrite(3, off);
  digitalWrite(3, off); 
  delay(2000);

}
