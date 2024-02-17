/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:21:49 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/09 15:35:15 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <iostream>

template < typename T>

int easyfind(T &container, int x)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), x);
	if (iter == container.end())
		throw std::runtime_error("Could not find the element");
	return *iter;
}


#endif