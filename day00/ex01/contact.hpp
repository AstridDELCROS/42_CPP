#ifndef DEF_CONTACT
#define DEF_CONTACT
#include <string>
#include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 8;

class PhoneBook
{
    public:
    PhoneBook();
    ~PhoneBook();
    void setFirstName(std::string first_name);
    void setLastName(std::string last_name);
    void setLogin(std::string login);
    void setPostalAddress(std::string postal_address);
    void setEmail(std::string email);
    void setPhoneNumber(std::string phone_number);
    void setBirthdayDate(std::string birthday_date);
    void setFavoriteMeal(std::string favorite_meal);
    void setUnderwearColor(std::string underwear_color);
    void setDarkestSecret(std::string darkest_secret);

    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getLogin(void);
    std::string getPostalAddress(void);
    std::string getEmail(void);
    std::string getPhoneNumber(void);
    std::string getBirthdayDate(void);
    std::string getFavoriteMeal(void);
    std::string getUnderwearColor(void);
    std::string getDarkestSecret(void);

    private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _login;
    std::string _postalAddress;
    std::string _emailAddress;
    std::string _phoneNumber;
    std::string _birthdayDate;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;
};

PhoneBook addContact(void);
void searchContact(PhoneBook Phonebook[], int contact_index);
void displayPhonebook(PhoneBook Phonebook[], int numOfContactsAdded);

#endif