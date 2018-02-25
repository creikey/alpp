#ifndef TEST_SQUARES_SQUARE_H_
#define TEST_SQUARES_SQUARE_H_

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
#endif // TEST_SQUARES_SQUARE_H_
