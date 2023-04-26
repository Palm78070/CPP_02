#include "Point.hpp"

int main(void)
{
 // if (bsp(Point(0, 0), Point(10, 0), Point(10, 20), Point(10, 20.5)) == true)
 // if (bsp(Point(0, 0), Point(10, 0), Point(10, 30), Point(10, 15)) == true)
 if (bsp(Point(0, 0), Point(10, 0), Point(10, 20), Point(5, 2)) == true)
 {
  std::cout << "Point is in the triangle" << std::endl;
 }
 else
 {
  std::cout << "Point is not in the triangle" << std::endl;
 }
 return 0;
}