# BrushlessMotor
Brushless Motor Library For Arduino

### Example Usage

    #include <Servo.h>  // Required !
    #include <BrushlessMotor.h>

    ...
    BrushlessMotor motorOne(9);  // Create brushless motor object
    ...

    void setup()
    {
      ...
      motorOne.init();  // Initialize Pin
      ...
    }

    void loop()
    {
      ...
      motorOne.write(<value>);  // Write value to motor
      ...
    }
