/*
 Stepper Motor Control 

 This demonstrates full step and half step
 modes.

 Written by William Smith
 (frostybeard in Github)
 */

#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11, 1);

word DELAY=2;

void setup() {
  // initialize the serial port:
  Serial.begin(9600);
  myStepper.setSpeed(75);  
}

void loop() {
  myStepper.setHalfStep(1);
  myStepper.stepForward(2000);
  myStepper.stopMotor();
  delay(1000);
  myStepper.stepBackward(2000);
  myStepper.stopMotor();
  delay(1000);
  myStepper.setHalfStep(0);
  myStepper.stepForward(1000);
  myStepper.stopMotor();
  delay(1000);
  myStepper.stepBackward(1000);
  myStepper.stopMotor();
  delay(1000);

}

