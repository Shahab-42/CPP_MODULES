/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:36:09 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/09 16:11:20 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <ctime>
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	private:
			unsigned int		_max_value;
			std::vector<int>	_vector;
			
			class EmptyContainer : public std::exception
			{
				public:
					const char *what() const throw();
			};
			class MaxContainer : public std::exception
			{
				public:
					const char *what() const throw();
			};
			
	public:
			Span();
			Span(unsigned int N);
			Span(Span const &object);
			Span &operator=(Span const &object);
			~Span();

			int		longestSpan();
			int		shortestSpan();
			void	addNumber(int num);
			void	addMoreNum(int size);
			
		
};
#endif