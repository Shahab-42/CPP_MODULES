/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:23:11 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/10 16:57:20 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <exception>
#include <vector>
#include <list>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

class PmergeMe
{
	public :
	
		PmergeMe(void);
		PmergeMe(const PmergeMe& c_merge);
		PmergeMe& operator=(const PmergeMe& c_merge);
		~PmergeMe(void);

		void ListSorting(int argc, char **argv);
		void vectorSorting(int argc, char **argv);





};
#endif