/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:57:58 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/17 16:46:16 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	{
		std::string formName = "robotomy request"; 
		std::string formTarget = "Gorms";
		
		Intern intern;
		Bureaucrat bureaucrat("John", 1);
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << *f;
		bureaucrat.signAForm(*f);
		std::cout << (*f).getSigned() << std::endl;
		bureaucrat.executeForm(*f);
		delete f;
	}
}