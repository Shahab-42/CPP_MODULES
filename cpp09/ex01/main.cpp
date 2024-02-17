/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:11:46 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/10 14:30:02 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char **argv)
{
    if (argc == 2)
    {
		std::string str = argv[1];
		if (!(str.find_first_not_of("0123456789+/*- ") == std::string::npos))
		{
			std::cout << "Expression is wrong:" << std::endl;
			return (0);
		}

		if (str.find('+') == std::string::npos && str.find('/') == std::string::npos
        	&& str.find('-') == std::string::npos && str.find('*') == std::string::npos)
		{
			std::cout << "Expression is wrong:" << std::endl;
        	return (0);
		}
        RPN rpn(argv[1]);
    }
    else
    {
        std::cout << "Error" << std::endl;
        std::cout << "usage: ./RPN <expression>" << std::endl; 
    }
}