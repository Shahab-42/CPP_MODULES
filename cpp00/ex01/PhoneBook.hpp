/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:19:50 by smuhamma          #+#    #+#             */
/*   Updated: 2023/09/02 12:20:25 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact		_contacts[8];
		int			_index;
		int			_maxIndex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		addContact(Contact contact);
		void		searchContact(void);
		void		printContacts(void);
};

#endif