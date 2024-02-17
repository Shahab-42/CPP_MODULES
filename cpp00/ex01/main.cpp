/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:19:21 by smuhamma          #+#    #+#             */
/*   Updated: 2023/09/09 12:02:58 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void) 
{
	PhoneBook	phoneBook;
	Contact		contact;
	std::string	input;

	while (1) {
		std::cout << "*===========================================*" << std::endl;
		std::cout << "|   COMMANDS: | ADD | | SEARCH | | EXIT |   |" << std::endl;
		std::cout << "*===========================================*" << std::endl;
		std::cout << "Enter a Command: ";
		if (!std::getline(std::cin, input))
			break ;
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
		{
			contact.setFirstName();
			contact.setLastName();
			contact.setNickname();
			contact.setPhoneNumber();
			contact.setDarkestSecret();
			phoneBook.addContact(contact);
		}
		else if (input == "SEARCH")
			phoneBook.searchContact();
	}
	return (0);
}