#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
public:
 Fixed(void);
 Fixed(const int n);
 Fixed(const float n);
 Fixed(const Fixed &src);
 ~Fixed();

 Fixed &operator=(const Fixed &x); // canonical form
 int getRawBits(void) const;
 void setRawBits(int const raw);
 float toFloat(void) const;
 int toInt(void) const;

private:
 int _fixNum;
 static const int _fixedW = 8; // store number of fractional bits
};
std::ostream &operator<<(std::ostream &o, Fixed const &i); // canonical form

#endif
