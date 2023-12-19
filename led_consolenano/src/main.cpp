
#include "snakegame.h"
#include "flappygame.h"

snake_game game;

void setup() {
  Serial.begin(9600); 
  Serial.println(Pin::joystickX);
  game.initialize();         // initialize pins & LED matrix
  game.calibrateJoystick(); // calibrate the joystick home (do not touch it)
  //game.showSnakeMessage(); // scrolls the 'snake' message around the matrix
}


void loop() {
 game.rungame();

  // uncomment this if you want the current game board to be printed to the serial (slows down the game a bit)
  // dumpGameBoard();
}

