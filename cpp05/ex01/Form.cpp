/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:06:36 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/17 16:19:29 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Form"), _isSigned(false), _signGrade(1), _execGrade(10) 
{
}

Form::Form(std::string name, int _signGrade, int _execGrade):
	_name(name), _isSigned(false), _signGrade(_signGrade),
	_execGrade(_execGrade)
{
	try
	{
		if (this->_execGrade > 150 || this->_signGrade > 150)
			throw Form::GradeTooLowException();
		else if (this->_execGrade < 1 || this->_signGrade < 1)
			throw Form::GradeTooHighException();			
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::Form(Form const &object):
	_name(object._name), _isSigned(object._isSigned),
	_signGrade(object._signGrade), _execGrade(object._execGrade)
{
	*this=object;
}

Form & Form::operator=(Form const &obj)
{
	if (this != &obj)
	{
		const_cast<std::string&>(this->_name) = obj.getName();
		const_cast<int&>(this->_signGrade) = obj.getSignGrade();
		const_cast<int&>(this->_execGrade) = obj.getExecGrade();
		this->_isSigned= obj.getSigned();
	}
	return(*this);
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	out << "Form name: " << obj.getName() << std::endl;
	out << "Grade to sign: " << obj.getSignGrade() << std::endl;
	out << "Grade to execute: " << obj.getExecGrade() << std::endl;
	out << "Signed: " << obj.getSigned() << std::endl;
	return (out);
}

Form::~Form()
{
}

void	Form::beSigned(Bureaucrat const &obj)
{
	if (obj.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

bool	Form::getSigned() const
{
	return (this->_isSigned);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int	Form::getExecGrade() const
{
	return (this->_execGrade);
}

std::string Form::getName() const
{
	return (this->_name);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}