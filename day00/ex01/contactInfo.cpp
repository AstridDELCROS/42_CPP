/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactInfo.cpp                                    :+:      :+:    :+:   */
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

PhoneBook::PhoneBook()
{
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_login = "";
	_postalAddress = "";
	_emailAddress = "";
	_phoneNumber = "";
	_birthdayDate = "";
	_favoriteMeal = "";
	_underwearColor = "";
	_darkestSecret = "";
}

PhoneBook::~PhoneBook()
{}

void		PhoneBook::setFirstName(std::string first_name)
{
	_firstName = first_name;
}

void		PhoneBook::setLastName(std::string last_name)
{
	_lastName = last_name;
}

void		PhoneBook::setLogin(std::string login)
{
	_login = login;
}

void		PhoneBook::setPostalAddress(std::string postal_address)
{
	_postalAddress = postal_address;
}

void		PhoneBook::setEmail(std::string email)
{
	_emailAddress = email;
}

void		PhoneBook::setPhoneNumber(std::string phone_number)
{
	_phoneNumber = phone_number;
}

void		PhoneBook::setBirthdayDate(std::string birthday_date)
{
	_birthdayDate = birthday_date;
}

void		PhoneBook::setFavoriteMeal(std::string favorite_meal)
{
	_favoriteMeal = favorite_meal;
}

void		PhoneBook::setUnderwearColor(std::string underwear_color)
{
	_underwearColor = underwear_color;
}

void		PhoneBook::setDarkestSecret(std::string darkest_secret)
{
	_darkestSecret = darkest_secret;
}

std::string	PhoneBook::getFirstName(void)
{
	return _firstName;
}

std::string	PhoneBook::getLastName(void)
{
	return _lastName;
}

std::string	PhoneBook::getLogin(void)
{
	return _login;
}

std::string	PhoneBook::getPostalAddress(void)
{
	return _postalAddress;
}

std::string	PhoneBook::getEmail(void)
{
	return _emailAddress;
}

std::string	PhoneBook::getPhoneNumber(void)
{
	return _phoneNumber;
}

std::string	PhoneBook::getBirthdayDate(void)
{
	return _birthdayDate;
}

std::string	PhoneBook::getFavoriteMeal(void)
{
	return _favoriteMeal;
}

std::string	PhoneBook::getUnderwearColor(void)
{
	return _underwearColor;
}

std::string	PhoneBook::getDarkestSecret(void)
{
	return _darkestSecret;
}
