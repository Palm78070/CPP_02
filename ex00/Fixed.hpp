#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Fixed
{
public:
 Fixed();
 Fixed(const Fixed &src);
 ~Fixed();

 Fixed &operator=(const Fixed &x); // canonical form
 int getRawBits(void) const;
 void setRawBits(int const raw);

private:
 int _fixNum;
 static const int _fixedW = 8; // store number of fractional bits
};

// std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif
