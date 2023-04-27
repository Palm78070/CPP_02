/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:50:59 by rthammat          #+#    #+#             */
/*   Updated: 2023/04/27 19:52:04 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixNum = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixNum(n << _fixedW)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixNum(std::roundf(n * (1 << _fixedW)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &x)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &x)
		this->_fixNum = x.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixNum);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixNum = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixNum)) / (1 << _fixedW);
}

int Fixed::toInt(void) const
{
	return (this->_fixNum >> this->_fixedW);
}
//////////////comparison////////////////
bool Fixed::operator>(const Fixed src) const
{
	return (this->_fixNum > src.getRawBits());
}

bool Fixed::operator<(const Fixed src) const
{
	return (this->_fixNum < src.getRawBits());
}

bool Fixed::operator>=(const Fixed src) const
{
	return (this->_fixNum >= src.getRawBits());
}

bool Fixed::operator<=(const Fixed src) const
{
	return (this->_fixNum <= src.getRawBits());
}

bool Fixed::operator==(const Fixed src) const
{
	return (this->_fixNum == src.getRawBits());
}

bool Fixed::operator!=(const Fixed src) const
{
	return (this->_fixNum != src.getRawBits());
}
//////////////Arithmetic////////////////
Fixed Fixed::operator+(const Fixed src) const
{
	return Fixed((this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(const Fixed src) const
{
	return Fixed((this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(const Fixed src) const
{
	return Fixed((this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(const Fixed src) const
{
	return Fixed((this->toFloat() / src.toFloat()));
}
//////////////INC,DECoperator////////////////
Fixed &Fixed::operator++(void)
{
	++this->_fixNum;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._fixNum = this->_fixNum++;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	--this->_fixNum;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._fixNum = this->_fixNum--;
	return (tmp);
}
//////////////MIN,MAX operator////////////////
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	std::cout << "yyy" << std::endl;
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	std::cout << "take constant argument" << std::endl;
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	std::cout << "take constant argument" << std::endl;
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}
