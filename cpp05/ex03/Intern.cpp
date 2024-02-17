/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:42:18 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/17 16:42:53 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &object)
{
	*this = object;
}

Intern & Intern::operator=(const Intern &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

Intern::~Intern()
{
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++) {
		if (name == formNames[i]) {
			delete forms[(i + 2) % 3];
			delete forms[(i + 1) % 3];
			return forms[i];
		}
	}
	delete forms[2];
	delete forms[0];
	delete forms[1];
	throw std::out_of_range("Form not found");
}