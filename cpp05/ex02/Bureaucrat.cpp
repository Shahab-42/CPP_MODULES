/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:50:39 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/17 16:35:12 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bureaucrat"), _grade(99)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &object)
{
	*this = object;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &obj)
{
	if (this != &obj)
	{
		const_cast<std::string&>(this->_name) = obj.getName();
		this->_grade = obj.getGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj)
{
	try
	{
		if (obj.getGrade() > 150)
			throw std::exception();
		else if (obj.getGrade() < 1)
			throw std::exception();
		else
			out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "Grade Not In Range" << '\n';
	}
	return (out);
}

Bureaucrat::~Bureaucrat()
{
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

void	Bureaucrat::gradeDecreament()
{
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	Bureaucrat::gradeIncreament()
{
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

void	Bureaucrat::signAForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << form.getName() << 
				" because " << e.what() << '\n';
	}
}

void Bureaucrat::executeForm(AForm const &Aform) {
	try {
		Aform.execute(*this);
		std::cout << _name << " executes " << Aform.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << _name << " couldn't execute " << Aform.getName() << " because " << e.what() << std::endl;
	}
}