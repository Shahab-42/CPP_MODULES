/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:38:31 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/11 11:17:44 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	this->i = 0;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" <<std::endl;
	*this=rhs;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called " <<std::endl;
	if(this != &rhs)
	{
		this->i = rhs.i;
	}
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBitscalled " <<std::endl;
	this->i = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called " <<std::endl;
	return this->i;
}
