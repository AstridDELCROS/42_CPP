#include <iostream>
#include "contact.hpp"
#include <string>
#include <iomanip>

void searchContact(PhoneBook Phonebook[], int numOfContactsAdded)
{
    int index = 0;
    std::cout << "Enter the index : " << std::endl;
    std::cin >> index;
    if (std::cin && index >= 0 && index < numOfContactsAdded) {
        std::cout << Phonebook[index].getFirstName() << std::endl;
        std::cout << Phonebook[index].getLastName() << std::endl;
        std::cout << Phonebook[index].getLogin() << std::endl;
        std::cout << Phonebook[index].getFavoriteMeal() << std::endl;
        std::cout << Phonebook[index].getEmail() << std::endl;
        std::cout << Phonebook[index].getPhoneNumber() << std::endl;
        std::cout << Phonebook[index].getBirthdayDate() << std::endl;
        std::cout << Phonebook[index].getFavoriteMeal() << std::endl;
        std::cout << Phonebook[index].getUnderwearColor() << std::endl;
        std::cout << Phonebook[index].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, nothing to show." << std::endl;
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

void displayPhonebook(PhoneBook Phonebook[], int numOfContactsAdded)
{
    std::string firstname;
    std::string lastname;
    std::string login;
    
    std::cout << std::setw(10);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for(int i = 0; i < numOfContactsAdded; i += 1)
    {
        firstname = Phonebook[i].getFirstName();
        lastname = Phonebook[i].getLastName();
        login = Phonebook[i].getLogin();

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