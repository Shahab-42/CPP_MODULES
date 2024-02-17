/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:11:43 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/10 14:22:46 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	
}

RPN::RPN(std::string argv)
{
	this->divideByZero = true;
	if (argv.size() > 3)
	{
        this->fillStack(argv);
		if (divideByZero == false)
		{
			std::cout << "Dividing by zero" << std::endl;
			return ;
		}
		std::cout << this->numbers.top() << std::endl;
    }
}

RPN::RPN(const RPN &object)
{
    *this = object;
}

RPN &RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
    {
		this->operators = rhs.operators;
		this->numbers = rhs.numbers;
    }
    return (*this);
}

RPN::~RPN()
{
	
}

void	RPN::fillStack(std::string expr)
{
	int	expr_size;

	expr_size = expr.size();
	for (int i = 0; i < expr_size; i++)
	{
		if (expr[i] != ' ')
		{
			if (isdigit(expr[i]) != 0)
				this->numbers.push(expr[i] - '0');
			else
				this->operators.push(expr[i]);
			if (this->operators.size() == 1 && this->numbers.size() >= 2)
				calculate();
		}
	}
}

void	RPN::calculate()
{
	int	operand1, operand2;
	char operation;

	operand2 = this->numbers.top();
	this->numbers.pop();
	operand1 = this->numbers.top();
	this->numbers.pop();
	operation = this->operators.top();
	this->operators.pop();
	if (operation == '/' && operand2 == 0)
		this->divideByZero = false;
	if (operation == '*')
		this->numbers.push(operand1 * operand2);
	else if (operation == '/' && operand2 != 0)
		this->numbers.push(operand1 / operand2);
	else if (operation == '-')
		this->numbers.push(operand1 - operand2);
	else if (operation == '+')
		this->numbers.push(operand1 + operand2);
}