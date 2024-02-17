/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:05:06 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 17:25:36 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
public:
	Animal();
	Animal(const Animal& obj);
	Animal &operator=(const Animal& obj);
	virtual ~Animal() = 0;
	virtual void makeSound()const = 0;
	virtual std::string getType()const = 0;
};


#endif