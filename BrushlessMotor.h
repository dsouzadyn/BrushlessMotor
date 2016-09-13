#ifndef BrushlessMotor_h
#define BrushlessMotor_h

#include "Arduino.h"

class BrushlessMotor
{
  public:
    BrushlessMotor(int pin);
    ~BrushlessMotor();
    void init();
    void write(int v);
  private:
    int _pin, _value;
    Servo ESC;
};

#endif
