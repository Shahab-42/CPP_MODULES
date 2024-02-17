/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:01:11 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/12 11:00:14 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	trap1("Player1");
	std::cout << "\n";
	trap1.attack("soldier0");
	std::cout << "\n";
	trap1.attack("soldier1");
	std::cout << "\n";
	trap1.attack("soldier2");
	std::cout << "\n";
	trap1.attack("soldier3");
	std::cout << "\n";
	trap1.attack("soldier4");
	std::cout << "\n";
	trap1.takeDamage(3);
	std::cout << "\n";
	trap1.beRepaired(10);
	std::cout << "\n";
	trap1.takeDamage(-2);
	std::cout << "\n";
	trap1.takeDamage(5);
	std::cout << "\n";
	trap1.takeDamage(50);
	std::cout << "\n";
	trap1.beRepaired(5);
	std::cout << "\n";
	return (0);
}