/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:24:06 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/10 17:02:32 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(const PmergeMe& c_merge)
{
	*this = c_merge;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& c_merge)
{
	(void)c_merge;
	return (*this);
}

PmergeMe::~PmergeMe(void) {}

unsigned int ft_stou(const std::string& str)
{
	unsigned int num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

static void printList(std::list<unsigned int>& vec)
{
	std::list<unsigned int>::const_iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}


static std::list<unsigned int> listMerge(std::list<unsigned int>& left, std::list<unsigned int>& right)
{
	std::list<unsigned int> merge;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			merge.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			merge.push_back(right.front());
			right.erase(right.begin());
		}
	}

	while (!left.empty())
	{
		merge.push_back(left.front());
		left.erase(left.begin());	
	}
	
	while (!right.empty())
	{
		merge.push_back(right.front());
		right.erase(right.begin());
	}
	return merge;
}

static void printVector(std::vector<unsigned int>& vec)
{
	std::vector<unsigned int>::const_iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}


static std::list<unsigned int> insertionMergeList(std::list<unsigned int> lst)
{
	if (lst.size() <= 1)
		return lst;

	int mid = lst.size() / 2;
	std::list<unsigned int> left;
	std::list<unsigned int> right;

	for (int i = 0; i < mid; i++)
	{
		left.push_back(lst.front());
		lst.pop_front();
	}
	right = lst;

	left = insertionMergeList(left);
	right = insertionMergeList(right);

	return (listMerge(left, right));
}

static std::vector<unsigned int> vectorMerge(std::vector<unsigned int>& left, std::vector<unsigned int>& right)
{
	std::vector<unsigned int> merge;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			merge.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			merge.push_back(right.front());
			right.erase(right.begin());
		}
	}

	while (!left.empty())
	{
		merge.push_back(left.front());
		left.erase(left.begin());	
	}
	
	while (!right.empty())
	{
		merge.push_back(right.front());
		right.erase(right.begin());
	}
	return merge;
}

static std::vector<unsigned int> insertionMergeVector(std::vector<unsigned int> vec)
{
	if (vec.size() <= 1)
		return vec;

	int mid = vec.size() / 2;
	std::vector<unsigned int> left(vec.begin(), vec.begin() + mid);
	std::vector<unsigned int> right(vec.begin() + mid, vec.end());

	left = insertionMergeVector(left);
	right = insertionMergeVector(right);

	return (vectorMerge(left, right));
}

void PmergeMe::ListSorting(int argc, char **argv)
{
	std::list<unsigned int> lst_data;

	for (int i = 1; i < argc; i++)
		lst_data.push_back(ft_stou(argv[i]));
	
	std::cout << "Before: ";
	printList(lst_data);
	std::clock_t start = std::clock();
	lst_data = insertionMergeList(lst_data);
	double duration = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
	std::cout << "After: ";
	printList(lst_data);

	std::cout << "Time to process a range of " << argc - 1 << " elements with std::list<unsigned int> : "
			<< duration << " ms" << std::endl;
}

void PmergeMe::vectorSorting(int argc, char **argv)
{
	std::vector<unsigned int> vec_data;

	for (int i = 1; i < argc; i++)
		vec_data.push_back(ft_stou(argv[i]));
	
	std::cout << "Before: ";
	printVector(vec_data);
	std::clock_t start = std::clock();
	vec_data = insertionMergeVector(vec_data);
	double duration = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
	std::cout << "After: ";
	printVector(vec_data);

	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector<unsigned int> : "
			<< duration << " us" << std::endl;
}






