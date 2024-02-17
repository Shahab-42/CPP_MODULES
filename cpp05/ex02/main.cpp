/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:57:58 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/17 16:38:00 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john", 39);
		ShrubberyCreationForm A("target");
		B.signAForm(A);
		B.executeForm(A);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john", 19);
		RobotomyRequestForm A("target");
		B.signAForm(A);
		B.executeForm(A);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john",3);
		PresidentialPardonForm A("target");
		B.signAForm(A);
		B.executeForm(A);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
}