/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:57:08 by rthammat          #+#    #+#             */
/*   Updated: 2023/04/27 19:57:39 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point &src) : _x(src._x), _y(src._y)
{
}

Point::~Point()
{
}

Fixed Point::getFixX(void) const
{
	return (this->_x);
}

Fixed Point::getFixY(void) const
{
	return (this->_y);
}

Point &Point::operator=(const Point &x)
{
	if (this != &x)
	{
		(Fixed) this->_x = x.getFixX();
		(Fixed) this->_y = x.getFixY();
	}
	return (*this);
}
