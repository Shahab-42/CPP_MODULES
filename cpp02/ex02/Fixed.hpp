/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:27:24 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/11 11:21:20 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>


class Fixed
{
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const	float num1);
		~Fixed();
		Fixed(const Fixed &rhs);
		Fixed &operator=(const Fixed &rhs);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		
		bool operator < (const Fixed &rhs) const;
		bool operator > (const Fixed &rhs) const;
		bool operator <= (const Fixed &rhs) const;
		bool operator >= (const Fixed &rhs) const;
		bool operator == (const Fixed &rhs) const;
		bool operator != (const Fixed &rhs) const;

		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;

		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		
	private:
		int i;
		static const int j = 8;
		
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);
#endif