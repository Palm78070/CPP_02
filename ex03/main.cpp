/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:58:17 by rthammat          #+#    #+#             */
/*   Updated: 2023/04/27 19:58:29 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
