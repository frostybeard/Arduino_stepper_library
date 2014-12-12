/*
 

 */

#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

word DELAY=2;

void setup() {
  // initialize the serial port:
  Serial.begin(9600);
  myStepper.setSpeed(150);
}

void loop() {
  myStepper.stepForward(1000);
  myStepper.stopMotor();
  delay(1000);
  myStepper.stepBackward(1000);
  myStepper.stopMotor();
  delay(1000);
}

