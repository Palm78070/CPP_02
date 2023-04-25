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

 //////////////Comparison/////////////
 bool operator>(const Fixed src) const;
 bool operator<(const Fixed src) const;
 bool operator>=(const Fixed src) const;
 bool operator<=(const Fixed src) const;
 bool operator==(const Fixed src) const;
 bool operator!=(const Fixed src) const;
 //////////////Arithmatic/////////////
 Fixed operator+(const Fixed src) const;
 Fixed operator-(const Fixed src) const;
 Fixed operator*(const Fixed src) const;
 Fixed operator/(const Fixed src) const;
 //////////////INC,DEC operator///////
 Fixed &operator++(void);
 Fixed operator++(int);
 Fixed &operator--(void);
 Fixed operator--(int);
 //////////////MIN,MAX operator///////
 static Fixed &min(Fixed &a, Fixed &b);
 static const Fixed &min(const Fixed &a, const Fixed &b);
 static Fixed &max(Fixed &a, Fixed &b);
 static const Fixed &max(const Fixed &a, const Fixed &b);

private:
 int _fixNum;
 static const int _fixedW = 8; // store number of fractional bits
};
std::ostream &operator<<(std::ostream &o, Fixed const &i); // canonical form

#endif
