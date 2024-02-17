/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:28:02 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/17 16:39:26 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("ShruberryCreationForm", 145, 137), _target(_target)
{
	this->write_ascii_tree();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &object): AForm(object), _target(object.getTarget())
{
	*this = object;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	if (this != &obj)
		AForm::operator=(obj);
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void 	ShrubberyCreationForm::write_ascii_tree() const
{
	std::ofstream file;

	try {
		file.open((this->_target + "_shrubbery").c_str());
		if (file.fail())
			throw ShrubberyCreationForm::MyAppropriateExecption();
	}
	catch (std::exception &e) {
		throw;
	}
	file << "              _{\\ _{\\{\\/}/}/}__            " << std::endl;
	file << "             {/{/\\}{/{/\\}(\\}{/\\} _         " << std::endl;
	file << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _     " << std::endl;
	file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}    " << std::endl;
	file << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}     " << std::endl;
	file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}     " << std::endl;
	file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}    " << std::endl;
	file << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}    " << std::endl;
	file << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}   " << std::endl;
	file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}  " << std::endl;
	file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)   " << std::endl;
	file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}   " << std::endl;
	file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}   " << std::endl;
	file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}   " << std::endl;
	file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)    " << std::endl;
	file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}        " << std::endl;
	file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}          " << std::endl;
	file << "              {){/ {\\/}{\\/} \\}\\}           " << std::endl;
	file << "              (_)  \\.-'.-/                 " << std::endl;
	file << "          __...--- |'-.-'| --...__         " << std::endl;
	file << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__ " << std::endl;
	file << " -\"    ' .  . '    |.'-._| '  . .  '   jro " << std::endl;
	file << " .  '-  '    .--'  | '-.'|    .  '  . '    " << std::endl;
	file << "          ' ..     |'-_.-|                 " << std::endl;
	file << "  .  '  .       _.-|-._ -|-._  .  '  .     " << std::endl;
	file << "              .'   |'- .-|   '.            " << std::endl;
	file << "  ..-'   ' .  '.   `-._.-�   .'  '  - .   " << std::endl;
	file << "   .-' '        '-._______.-'     '  .     " << std::endl;
	file << "        .      ~,                          " << std::endl;
	file << "    .       .   |\\   .    ' '-.            " << std::endl;
	file << "    ___________/  \\____________            " << std::endl;
	file << "   /  Why is it, when you want \\           " << std::endl;
	file << "  |  something, it is so damn   |          " << std::endl;
	file << "  |    much work to get it?     |          " << std::endl;
	file << "   \\___________________________/           " << std::endl;
	file.close();
}

void	 ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getSigned())
		{
			if (executor.getGrade() <= this->getExecGrade())
			{
				this->write_ascii_tree();
				std::cout << this->_target << "_shruberry tree has been created" << std::endl;
			}
			else
				throw AForm::GradeTooLowException();
		}
		else
			throw std::out_of_range("Bureaucrat Form not signed");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

const char *ShrubberyCreationForm::MyAppropriateExecption::what() const throw() {
	return ("Couldn't Create/Open File");
}