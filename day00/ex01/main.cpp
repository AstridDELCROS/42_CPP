#include <iostream>
#include "contact.hpp"
#include <exception>
#include <string>

int main()
{
    std::cout << "You can choose between: " << std::endl;
    std::cout << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
    std::cout << std::endl;

    PhoneBook Phonebook[MAX_CONTACTS];
    int entry_index;
    std::string choice;

    entry_index = 0;

    while (choice != "EXIT")
    {
        getline(std::cin, choice, '\n');
        if (choice == "ADD")
        {
            if (entry_index < MAX_CONTACTS)
                Phonebook[entry_index++] = addContact();
            else {
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
        else {
            std::cout << "Choose between ADD, SEARCH and EXIT please" << std::endl;
            std::cout << std::endl;
        }
    }
    return (0);
}