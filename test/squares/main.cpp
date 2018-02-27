#include "Square.hpp"
#include <alpp.hpp>
#include <iostream>

using namespace alpp;

int main(void) {
  // The game exit status
  GameExitStatus stat;
  // Create the main scene
  Scene mainScene = Scene();
  // Create the main square
  GameObject mainSquare = Square(vec(1, 1), vec(10, 10));
  // Add the square object
  mainScene.addGameObject(mainSquare);
  // Load the game configuration file
  GameConf mainConf = GameConf("mainConf.txt");
  // Create the game and the window with configuration
  Game mainGame = Game(mainConf);
  // Run the game indefinitely unless you need to close the window
  while (!stat.exit) {
    stat = mainGame.run();
  }
}
