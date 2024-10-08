/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Position.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:51:42 by macarval          #+#    #+#             */
/*   Updated: 2024/09/19 23:23:27 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POSITION_HPP
# define POSITION_HPP

# include <iostream>
# include "Colors.hpp"

struct Position
{
	int	_x;
	int	_y;
	int	_z;

	Position( void ) : _x(-1), _y(-1), _z(-1)
	{
		std::cout << GREEN << "Position🏘️  default created!";
		std::cout << RESET << std::endl;
	}

	Position(int x, int y, int z) : _x(x), _y(y), _z(z)
	{
		std::cout << GREEN << "Position🏘️  created!" << RESET << std::endl;
	}

	~Position( void )
	{
		std::cout << RED << "Position🏘️  destroyed!" << RESET  << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& p_os, const Position& p_pos)
	{
		p_os << BLUE << "   Position:\n   " << YELLOW << p_pos._x << ", "
				<< p_pos._y << ", " << p_pos._z << RESET << std::endl;

		return (p_os);
	}
};

#endif
