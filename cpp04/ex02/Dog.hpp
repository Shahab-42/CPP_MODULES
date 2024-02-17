/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:17:37 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 17:16:49 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	protected:
		std::string type;
public:
	Dog();
	Dog(const Dog& obj);
	Dog &operator=(const Dog& obj);
	
	~Dog();
	void makeSound()const;
	std::string getType()const;
	Brain	*getBrain() const;
	
};


#endif