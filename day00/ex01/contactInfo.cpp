#include <iostream>
#include "contact.hpp"
#include <string>

Contact::Contact()
{
    m_index = "";
    m_firstName = "";
    m_lastName = "";
    m_nickName = "";
    m_login = "";
    m_postalAddress = "";
    m_emailAddress = "";
    m_phoneNumber = "";
    m_birthdayDate = "";
    m_favoriteMeal = "";
    m_underwearColor = "";
    m_darkestSecret = "";
}
Contact::~Contact()
{}

void Contact::setFirstName(std::string first_name)
{
    m_firstName = first_name;
}

void Contact::setLastName(std::string last_name)
{
    m_lastName = last_name;
}

void Contact::setLogin(std::string login)
{
    m_login = login;
}

void Contact::setPostalAddress(std::string postal_address)
{
    m_postalAddress = postal_address;
}

void Contact::setEmail(std::string email)
{
    m_emailAddress = email;
}

void Contact::setPhoneNumber(std::string phone_number)
{
    m_phoneNumber = phone_number;
}

void Contact::setBirthdayDate(std::string birthday_date)
{
    m_birthdayDate = birthday_date;
}

void Contact::setFavoriteMeal(std::string favorite_meal)
{
    m_favoriteMeal = favorite_meal;
}

void Contact::setUnderwearColor(std::string underwear_color)
{
    m_underwearColor = underwear_color;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
    m_darkestSecret = darkest_secret;
}