#include <LedControl.h>
#if !defined(VARIABLES)
#define VARIABLES
struct Pin {
  static const short joystickX = A2;   // joystick X axis pin
  static const short joystickY = A1;   // joystick Y axis pin
  static const short CLK = 10;   // clock for LED matrix
  static const short CS  = 11;  // chip-select for LED matrix
  static const short DIN = 12; // data-in for LED matrix
  static const short flappybutton = 6; // button pin
};



LedControl matrix = LedControl(Pin::DIN, Pin::CLK, Pin::CS, 1);




#endif // VARIABLES
