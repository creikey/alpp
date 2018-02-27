#ifndef H_SQUARES
#define H_SQUARES

#include <alpp.hpp>
using namespace alpp;

class Square : protected GameObject {
public:
  Square(Vec, Vec);
  void ready();
  void process(Game game);
  void draw();

private:
  Vec pos;
  Vec size;
  Color col;
};

#endif // H_SQUARES
