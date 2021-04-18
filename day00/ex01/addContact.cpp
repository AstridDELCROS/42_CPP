/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/02 03:30:31 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
#include <string>

PhoneBook	addContact(void)
{
	PhoneBook new_entry;
	std::string input;
	std::cout << "Enter your firstname : " << std::endl;
	std::cin >> input;
	new_entry.setFirstName(input);
	std::cout << "Enter your lastname : " << std::endl;
	std::cin >> input;
	new_entry.setLastName(input);
	std::cout << "Enter your login : " << std::endl;
	std::cin >> input;
	new_entry.setLogin(input);
	std::cout << "Enter your postal address : " << std::endl;
	std::cin >> input;
	new_entry.setPostalAddress(input);
	std::cout << "Enter your email : " << std::endl;
	std::cin >> input;
	new_entry.setEmail(input);
	std::cout << "Enter your phone number : " << std::endl;
	std::cin >> input;
	new_entry.setPhoneNumber(input);
	std::cout << "Enter your birtday date : " << std::endl;
	std::cin >> input;
	new_entry.setBirthdayDate(input);
	std::cout << "Enter your favorite meal : " << std::endl;
	std::cin >> input;
	new_entry.setFavoriteMeal(input);
	std::cout << "Enter your underwear color : " << std::endl;
	std::cin >> input;
	new_entry.setUnderwearColor(input);
	std::cout << "Enter your darkest secret : " << std::endl;
	std::cin >> input;
	new_entry.setDarkestSecret(input);
	std::cout << std::endl << "ADDED TO THE PHONEBOOK" << std::endl;
	return (new_entry);
}
