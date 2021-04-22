/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/02 03:30:31 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
#include <exception>
#include <string>

int	main()
{
	PhoneBook Phonebook[MAX_CONTACTS];
	int	entry_index;
	std::string choice;

	std::cout << "You can choose between: " << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << std::endl;
	entry_index = 0;
	while (choice != "EXIT")
	{
		getline(std::cin, choice, '\n');
		if (std::cin.eof())
            return 0;
		if (choice == "ADD")
		{
			if (entry_index < MAX_CONTACTS)
				Phonebook[entry_index++] = addContact();
			else
			{
				std::cout << "Phonebook full!" << std::endl;
				continue;
			}
		}
		else if (choice == "SEARCH")
		{
		// can't be above 8 anyway as the possibility to add more is blocked
			if (entry_index > 0)
				displayPhonebook(Phonebook, entry_index);
			else
				std::cout << "Still no contact..." << std::endl;
			}
		else
		{
			if (choice != "EXIT")
			{
				std::cout << "Choose between ADD, SEARCH and EXIT please" << std::endl;
				std::cout << std::endl;
			}
		}
	}
	return (0);
}
