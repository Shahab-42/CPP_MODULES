/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:13:13 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/10 13:56:06 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange RateBTC(argv[1]);
		return (0);
	}
	else
	{
		std::cout << "Argument is Invalid" << std::endl;
		return (1);
	}
	return (0);
}