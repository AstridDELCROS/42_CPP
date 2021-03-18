#include <iostream>
#include "contact.hpp"
#include <string>
#include <iomanip>

void searchContact(Contact Phonebook[], int numOfContactsAdded)
{
    int index = 0;
    while (index < numOfContactsAdded) {
        std::cout << "Enter the index : " << std::endl;
        std::cin >> index;
        if (index >= 0 && index < numOfContactsAdded) {
            std::cout << Phonebook[index].m_firstName << std::endl;
            std::cout << Phonebook[index].m_lastName << std::endl;
            std::cout << Phonebook[index].m_login << std::endl;
            std::cout << Phonebook[index].m_favoriteMeal << std::endl;
            std::cout << Phonebook[index].m_emailAddress << std::endl;
            std::cout << Phonebook[index].m_phoneNumber << std::endl;
            std::cout << Phonebook[index].m_birthdayDate << std::endl;
            std::cout << Phonebook[index].m_favoriteMeal << std::endl;
            std::cout << Phonebook[index].m_underwearColor << std::endl;
            std::cout << Phonebook[index].m_darkestSecret << std::endl;
        }
        else
        {
            std::cin.clear();
            std::cout << "Sorry, nothing to show." << std::endl;
            break;
        }
    }
}

std::string	columnLength(std::string field)
{
    if (field.length() > 10)
    {
        field.resize(10);
        field[9] = '.';
    }
    return (field);
}

void displayPhonebook(Contact Phonebook[], int numOfContactsAdded)
{
    std::string firstname;
    std::string lastname;
    std::string login;
    
    std::cout << std::setw(10);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for(int i = 0; i < numOfContactsAdded; i += 1)
    {
        firstname = Phonebook[i].m_firstName;
        lastname = Phonebook[i].m_lastName;
        login = Phonebook[i].m_login;

        std::cout << "|" << std::setw(10) << i;
        
        firstname = (firstname.length()) > 10 ? columnLength(firstname) : firstname;
        std::cout << "|" << std::setw(10) << firstname;

        lastname = (lastname.length()) > 10 ? columnLength(lastname) : lastname;
        std::cout << "|" << std::setw(10) << lastname;

        login = (login.length()) > 10 ? columnLength(login) : login;
        std::cout << "|" << std::setw(10) << login;

        std::cout << "|" << std::endl;
    }
    searchContact(Phonebook, numOfContactsAdded);
}