#ifndef DEF_CONTACT
#define DEF_CONTACT
#include <string>
#include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 8;

class Contact
{
    public:

    Contact();
    ~Contact();
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

    std::string m_index;
    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickName;
    std::string m_login;
    std::string m_postalAddress;
    std::string m_emailAddress;
    std::string m_phoneNumber;
    std::string m_birthdayDate;
    std::string m_favoriteMeal;
    std::string m_underwearColor;
    std::string m_darkestSecret;
};

Contact addContact(void);
void searchContact(Contact Phonebook[], int contact_index);
void displayPhonebook(Contact Phonebook[], int numOfContactsAdded);

#endif