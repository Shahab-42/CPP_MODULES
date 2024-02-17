/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:24:58 by smuhamma          #+#    #+#             */
/*   Updated: 2024/01/27 14:31:44 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <ctype.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &object);
		ScalarConverter &operator=(ScalarConverter const &rhs);
		
	public:
		~ScalarConverter();
		static void	toDouble(std::string str);
		static void	toFloat(std::string str);
		static void	toChar(std::string str);
		static void	toInt(std::string str);
		static void	convert(std::string str);
};
#endif