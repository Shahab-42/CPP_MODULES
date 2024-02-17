/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:16:41 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 16:33:46 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	protected:
		std::string type;
public:
	Cat();
	Cat(const Cat& obj);
	Cat &operator=(const Cat& obj);
	
	~Cat();
	void makeSound() const;
	std::string getType()const;
};


#endif