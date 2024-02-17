/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:28:14 by smuhamma          #+#    #+#             */
/*   Updated: 2024/01/27 14:30:42 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	Data data;
	data.s = "serialized";
	data.n = 99;

	// Serialize ser;
	
	uintptr_t serializedValue = Serialize::serialize(&data);
	std::cout << "serializedValue  : " << serializedValue << std::endl;
	
	Data *deserializedValue = Serialize::deserialize(serializedValue);

	std::cout << "&data            : " << &data << std::endl;
	std::cout << "deserializeValue : " << deserializedValue << std::endl;
	std::cout << deserializedValue->s << " = "  << deserializedValue->n << std::endl;
	return (0);
}