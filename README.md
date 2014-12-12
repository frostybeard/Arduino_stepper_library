Arduino_stepper_library
=======================

A stepper library for Arduino. Modified from the original Arduino library.

## constructors for set up

Stepper(int number_of_steps, int motor_pin_1, int motor_pin_2);

=======
Stepper(int number_of_steps, int motor_pin_1, int motor_pin_2);

Stepper(int number_of_steps, int motor_pin_1, int motor_pin_2, int motor_pin_3, int motor_pin_4);

## speed setter method:
void setSpeed(long whatSpeed);
- speed in RPMs

## mover methods:
void stepForward(int steps_to_move);
void stepBackward(int steps_to_move);
- set speed first!
- moves smoothly in the forward or backward direction

## shut down motor:
void stopMotor(void);
- shuts down pins to save energy and keep things cool.
