/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:28:19 by smuhamma          #+#    #+#             */
/*   Updated: 2024/01/27 14:26:34 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <stdint.h>
# include <iostream>
# include <cstdlib>
# include <string>

struct Data
{
	std::string	s;
	int			n;
};

class Serialize
{
	private:
		Serialize();
		Serialize(Serialize const &object);
		Serialize & operator=(Serialize const &rhs);

	public:
		~Serialize();
		static uintptr_t	serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif