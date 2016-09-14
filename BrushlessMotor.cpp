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
  _max = max;
  _min = min;
  ESC.attach(_pin);
  ESC.writeMicroseconds(_max);
  ESC.writeMicroseconds(_min);
}

void BrushlessMotor::write(int v)
{
  _value = v;
  ESC.writeMicroseconds(_value);
}
