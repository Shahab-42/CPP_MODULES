/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:57:58 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/17 16:16:19 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureaucrat_1("Person1", 3);
	Bureaucrat bureaucrat_2("Person2", 45);
	std::cout << bureaucrat_1 << std::endl;
	std::cout << bureaucrat_2 << std::endl;
	/*-----------------------------------*/
	Form form_1("Form_1", 5, 10);
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << form_1 << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	/*-----------------------------------*/
	try {
		Form form_2("Form_1", 5499, 10);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	/*-----------------------------------*/
	try {
		bureaucrat_1.signForm(form_1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	/*-----------------------------------*/
	std::cout << form_1 << std::endl;
	/*-----------------------------------*/
	try {
		bureaucrat_2.signForm(form_1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	/*-----------------------------------*/
	std::cout << form_1 << std::endl;
	return 0;
}