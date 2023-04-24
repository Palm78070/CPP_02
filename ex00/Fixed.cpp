#include "Fixed.hpp"

Fixed::Fixed(void)
{
 this->_fixNum = 0;
 std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
 std::cout << "Copy constructor called" << std::endl;
 *this = src;
}

Fixed::~Fixed()
{
 std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &x)
{
 std::cout << "Copy assignment operator called" << std::endl;
 if (this != &x)
  this->_fixNum = x.getRawBits();
 return (*this);
}

int Fixed::getRawBits(void) const
{
 std::cout << "getRawBits member function called" << std::endl;
 return (this->_fixNum);
}

void Fixed::setRawBits(int const raw)
{
 this->_fixNum = raw;
}