/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:23:27 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/10 14:07:43 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(std::string infile)
{
	if(!this->readCsvfile())
		return;
	if((!this->calculation(infile)))
		return;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &object)
{
    *this = object;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if(this != &obj)
	{
		
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	
}

bool BitcoinExchange::readCsvfile()
{
	std::ifstream	data("data.csv");
	std::string 	line;
	
	if (data.fail())
	{
		std::cout << "Error: Cannot Open Data File" << std::endl;
		data.close();
		return (false);
	}
	getline(data, line);
	while(!(data.eof()))
	{
		getline(data, line);
		
		std::stringstream	str(line);
		std::string 		date, rate;
		
		getline(str, date, ',');
		getline(str, rate);
		this->rate[date] = atof(rate.c_str());
	}
	data.close();
	return (true);
}

bool BitcoinExchange::calculation(std:: string inf)
{
	std::ifstream infile(inf.c_str());
	std::string 	line;

	if (infile.fail())
	{
		std::cout << "Error: Cannot Open Data File" << std::endl;
		infile.close();
		return (false);
	}
	getline(infile, line);
	if (line.compare("data | value") == 0)
	{
		std::cout << "Error: Invalid File Format" <<std::endl;
		infile.close();
		return (false);
	}
	else 
	{
		while(getline(infile, line))
		{
			this->readDates(line);
		}
	}
	infile.close();
	return (true);
}

void BitcoinExchange::readDates(std::string line)
{
	std::stringstream str(line);
	std::string 	date, delim, value;
	float 	val;

	str >> date >> delim >> value;

	val = this->checkValue(value);
	if (!(this->checkDate(date)) || !(this->checkDelim(line)) || val == -1)
		return ;
	this->DateAndPrint(date,val);
}

float		BitcoinExchange::checkValue(std::string value)
{
	float	val = atof(value.c_str());
	if (value.find("-") == 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (-1);
	}
	if (value.size() > 4 || val > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (-1);
	}
	return (val);
}

bool BitcoinExchange::checkDate(std::string date)
{
	std::stringstream	str(date);
	std::string			year, month, day;

	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	getline(str, year, '-');
	getline(str, month, '-');
	getline(str, day);
	if(!this->checkDmy(year, month, day))
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	return(true);
}

bool	BitcoinExchange::checkDelim(std::string date)
{
	if (date.find(" | ") != 10)
	{
		std::cout << "Error: Invalid Delimiter" << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::checkDmy(std::string year, std::string month, std::string day)
{
	int	y = atoi(year.c_str());  
	int	m = atoi(month.c_str());
	int	d = atoi(day.c_str());

	if (y < 2009 || y > 2022)
		return (false);
	if (m < 1 || m > 12)
		return (false);
	if (d < 1 || d > 31)
		return (false);
	if ((m == 2 && d > 28) && (y != 2012 && y != 2016 && y != 2020))
		return (false);
	if ((m == 2 && d > 29) && (y == 2012 || y == 2016 || y == 2020))
		return (false);
	return (true);
}

void	BitcoinExchange::DateAndPrint(std::string date, float val)
{
	if (this->rate.find(date) !=  this->rate.end())
	{
		float result = val * this->rate[date];
		std::cout << date << " => " << std::fixed << std::setprecision(2) << val;
		std::cout << " = " << result << std::endl;
		return ;
	}
	else if (this->checkDate(date))
	{
		date = this->lowerBound(date);
		this->DateAndPrint(date, val);
	}
}

std::string BitcoinExchange::lowerBound(std::string date)
{
	std::stringstream	str(date);
	std::string			year, month, day, newDate;

	getline(str, year, '-');
	getline(str, month, '-');
	getline(str, day);
	int	y = atoi(year.c_str());  
	int	m = atoi(month.c_str());
	int	d = atoi(day.c_str());

	if(d > 1)
		d--;
	else if (m > 2)
	{
		m--;
	}
	else if (y > 2008)
	{
		d = 31;
		m = 12;
		y--;
	}
	std::stringstream nwDate;
	nwDate << y << '-' << std::setw(2) << std::setfill('0') << m << '-' << std::setw(2) << std::setfill('0') << d;
	newDate = nwDate.str();
	return (newDate);



}






