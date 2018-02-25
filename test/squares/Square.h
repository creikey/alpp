#ifndef H_SQUARE
#define H_SQUARE

#include <alpp.hpp>
using namespace alpp;

class Square : protected GameObject {
public:
  Square(vec inSize);
  void ready();
  void run();
  void draw();

private:
  vec pos;
  vec size;
}

#endif // H_SQUARE
