/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:22:18 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/10 14:08:44 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <iomanip>
#include <sstream>


class BitcoinExchange
{
	private:
		std::map<std::string, float> rate;
		void	readDates(std::string line);
		void	DateAndPrint(std::string date, float val);

		std::string	lowerBound(std::string date);

		bool	readCsvfile();
		bool	calculation(std::string inputFile);
		bool	checkDate(std::string	date);
		float	checkValue(std::string	val);
		bool	checkDelim(std::string	line);
		bool	checkDmy(std::string year, std::string month, std::string day);
			
	public:
		BitcoinExchange();
		BitcoinExchange(std::string	  inputFile);
		BitcoinExchange(const BitcoinExchange &object);
		BitcoinExchange &operator=(const BitcoinExchange &obj);
		~BitcoinExchange();
};



#endif