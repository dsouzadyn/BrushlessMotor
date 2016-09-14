#ifndef BrushlessMotor_h
#define BrushlessMotor_h

#include "Arduino.h"

class BrushlessMotor
{
  public:
    BrushlessMotor(int pin);
    ~BrushlessMotor();
    void init(int max, int min);
    void write(int v);
  private:
    int _pin, _value, _min, _max;
    Servo ESC;
};

#endif
