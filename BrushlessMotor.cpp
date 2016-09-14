#include "Servo.h"
#include "Arduino.h"
#include "BrushlessMotor.h"


BrushlessMotor::BrushlessMotor(int pin)
{
  _pin = pin;
}

BrushlessMotor::~BrushlessMotor()
{
  ESC.detach();
}

void BrushlessMotor::init(int max, int min)
{
  ESC.attach(_pin);
}

void BrushlessMotor::write(int v)
{
  _value = v;
  ESC.writeMicroseconds(_value);
}
