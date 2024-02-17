/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:57:58 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/17 16:03:09 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Bob", 10);
	std::cout << b << std::endl;
	b.gradeIncreament();
	std::cout << b << std::endl;
	b.gradeDecreament();
	std::cout << b << std::endl;
	Bureaucrat be("Shahab", -8);
	std::cout << be << std::endl;
	return 0;
}