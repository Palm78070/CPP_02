/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:45:11 by rthammat          #+#    #+#             */
/*   Updated: 2023/04/27 19:45:16 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
public:
 Fixed(void);
 Fixed(const Fixed &src);
 ~Fixed();

 Fixed &operator=(const Fixed &x); // canonical form
 int getRawBits(void) const;
 void setRawBits(int const raw);

private:
 int _fixNum;
 static const int _fixedW = 8; // store number of fractional bits
};

#endif
