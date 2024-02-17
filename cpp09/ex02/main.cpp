/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:43:31 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/10 16:57:20 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

unsigned int ft_stou(const std::string& str);

int main(int argc, char **argv)
{
	if (argc == 1)
		return (0);

	PmergeMe pmerge;

	try
	{
		for (int i = 1; i < argc; i++)
		{
			if (std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
				{
					std::cout << "Wrong Element " << std::endl;
					return (0);
				}
		}
	}
	catch (std::exception& e) {
		std::cerr << e.what() << '\n';
		return (1);
	}
	pmerge.vectorSorting(argc, argv);
	pmerge.ListSorting(argc, argv);

	return (0);
}