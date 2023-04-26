#include "Point.hpp"

Fixed abs(Fixed x)
{
 if (x < 0)
  return (x * -1);
 return (x);
}

Fixed triangleArea(Point const a, Point const b, Point const c)
{
 Fixed aPart = a.getFixX() * (b.getFixY() - c.getFixY());
 //  // std::cout << "aPart " << aPart << std::endl;
 Fixed bPart = b.getFixX() * (c.getFixY() - a.getFixY());
 //  // std::cout << "bPart " << bPart << std::endl;
 Fixed cPart = c.getFixX() * (a.getFixY() - b.getFixY());
 //  // std::cout << "cPart " << cPart << std::endl;
 return ((aPart + bPart + cPart) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
 Fixed abcArea;
 Fixed pabArea;
 Fixed pacArea;
 Fixed pbcArea;

 std::cout << "Point ax: " << a.getFixX() << " ay: " << a.getFixY() << std::endl;
 std::cout << "Point bx: " << b.getFixX() << " by: " << b.getFixY() << std::endl;
 std::cout << "Point cx: " << c.getFixX() << " cy: " << c.getFixY() << std::endl;
 std::cout << "Point pointx: " << point.getFixX() << " pointy: " << point.getFixY() << std::endl;
 abcArea = abs(triangleArea(a, b, c));
 std::cout << "abc:" << abcArea << std::endl;
 pabArea = abs(triangleArea(point, a, b));
 std::cout << "pab:" << pabArea << std::endl;
 pacArea = abs(triangleArea(point, a, c));
 std::cout << "pac:" << pacArea << std::endl;
 pbcArea = abs(triangleArea(point, b, c));
 std::cout << "pbc:" << pbcArea << std::endl;
 std ::cout << "pab + pac + pbc = " << pabArea + pacArea + pbcArea << std::endl;
 return ((pabArea + pacArea + pbcArea) == abcArea);
}