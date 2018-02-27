#include "Square.hpp"
#include <alpp.hpp>
#include <iostream>

using namespace alpp;

Square::Square(Vec inSize, Vec inPos) : size(inSize), pos(inPos){};

Square::ready(){};

Square::process(Game game) {
  pos += Vec(5, 5);
  size += Vec(1, 1);
}

Square::draw() { drawSquare(pos, size, col); }
