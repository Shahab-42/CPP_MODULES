/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:53:17 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 17:08:41 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
#define BRAIN_CPP
#include <iostream>
#include <string>
# include <cstdlib>

class Brain
{
public:
	Brain();
	Brain(const Brain& obj);
	Brain &operator=(const Brain& obj);
	~Brain();
	void	getIdeas() const;
	void	setIdeas(std::string *ideas);
	std::string *getIdeaas();
	void	changeIdeas();
	std::string	ideas[100];
};





#endif