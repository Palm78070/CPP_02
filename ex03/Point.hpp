#include "Fixed.hpp"

class Point
{
public:
 Point(void);
 Point(const float x, const float y);
 Point(const Point &src);
 ~Point();

 Point &operator=(const Point &x);
 Fixed getFixX(void) const;
 Fixed getFixY(void) const;

private:
 Fixed const _x;
 Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);