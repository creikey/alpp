#include "Square.hpp"
#include <alpp.hpp>
#include <iostream>

using namespace alpp;

int main(void) {
  /* An example of creating a scene by hand, adding a square, and running the game */
  // The game exit status
  GameExitStatus stat;
  // Create the main scene
  Scene mainScene = Scene();
  // Create the main square
  GameObject mainSquare = Square(vec(0, 0), vec(10, 10));
  // Add the square object
  mainScene.addGameObject(mainSquare);
  // Load the game configuration file
  GameConf mainConf = GameConf("mainConf.txt");
  // Create the game and the window with configuration
  Game mainGame = Game(mainConf);
  // Add the premade scene to the game
  mainGame.switchScene(mainScene);
  // Run the game indefinitely unless you need to close the window
  while (!stat.exit) {
    mainGame.run();
    stat = mainGame.getStat();
  }
  return 0;
}
