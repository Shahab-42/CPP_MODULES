/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:11:50 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/10 14:23:05 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>


class RPN
{
    private:
        std::string			equation;
        std::stack<char>	operators;
		std::stack<int>		numbers;
		bool				divideByZero;

		void	fillStack(std::string expr);
		void	calculate();
		
	public:
        RPN();
		RPN(std::string	argv);
        RPN(const RPN &object);
        RPN &operator=(const RPN &obj);
        ~RPN();
};

#endif