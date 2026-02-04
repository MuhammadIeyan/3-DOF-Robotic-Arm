#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// Potentiometer pins
int PotPin1 = A1;
int PotPin2 = A2;
int PotPin3 = A3;

int val1;
int val2;
int val3;


void setup()
{
  servo1.attach(10);
  servo2.attach(9);
  servo3.attach(7);
  servo4.attach(6);
}

void loop()
{
  // Read the values from the potentiometers
  val1 = analogRead(PotPin1);
  val2 = analogRead(PotPin2);
  val3 = analogRead(PotPin3);
  
  // Convert the values from 0 to 180 degrees
  val1 = map(val1, 0, 1023, 0, 180);
  val2 = map(val2, 0, 1023, 0, 180);
  val3 = map(val3, 0, 1023, 0, 180);
  
  // Rotate the servo motors
  servo1.write(val1);
  servo2.write(val2);
  servo3.write(val2);
  servo4.write(val3);
  
  delay(15);
}