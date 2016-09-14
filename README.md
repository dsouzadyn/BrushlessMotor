# BrushlessMotor
Brushless Motor Library For Arduino

### Example Usage

    #include <Servo.h>  // Required !
    #include <BrushlessMotor.h>

    ...
    BrushlessMotor motorOne(9);  // Create brushless motor object with pin
    ...

    void setup()
    {
      ...
      motorOne.init(<max_value>, <min_value>);  // Initialize Motor
      ...
    }

    void loop()
    {
      ...
      motorOne.write(<value>);  // Write value to motor
      ...
    }
