## C++ Pool - day01

#### Memory allocation, references, pointers to members, switch

Summary: This document contains the subject for Module 01 of the C++ modules.

**Contents**

- I Exercise 00: BraiiiiiiinnnzzzZ
- II Exercise 01: Moar brainz!
- III Exercise 02: HI THIS IS BRAIN
- IV Exercise 03: Unnecessary violence
- V Exercise 04: Sed is for losers
- VI Exercise 05: Karen 2.0
- VII Exercise 06: Karen-filter

##### Exercise 00: BraiiiiiiinnnzzzZ
- Turn-in directory : ex 00 /
- Files to turn in : Makefile, main.cpp, Zombie.cpp, Zombie.hpp, newZombie.cpp, randomChump.cpp
- First, make a Zombie class. The zombies have a name and are able to announce themselves like:
```
<name> BraiiiiiiinnnzzzZ...
```
- Yes announce(void) is a member function. Also, add a debugging message in the destructor including de name of the Zombie.
- After this, write a function that will create a Zombie, name it, and return it to be used somewhere else in your code. The prototype of the function is:
```
Zombie* newZombie(std::string name);
```
- You will also have to write another function that will create aZombie, and make it announce itself. The prototype of the function is:
```
void randomChump( std::string name );
```
- Now the actual point of the exercise: your Zombies must be destroyed at the appropriate time (when they are not needed anymore). They must be allocated on the stack or the heap depending on its use: sometimes it’s appropriate to have them on the stack, at other times the heap may a better choice.

##### Exercise 01: Moar brainz!
- Turn-in directory : ex 01 /
- Files to turn in :Makefile, main.cpp, Zombie.cpp, Zombie.hpp, ZombieHorde.cpp
- Re-using the Zombie class, now we are going to create an horde of zombies!
- Write a function that takes an integer N. When called, it allocates N Zombieobjects. It must allocate all the N Zombie objects in a single allocation. Then, it should initialize each Zombie by giving to each one a name. Last, it should return the pointer to the first Zombie. The function is prototyped as follows:
```
Zombie* zombieHorde( int N, std::string name );
```
Submit a main to test that your function zombie Horde works as intended. You may want to do so by calling announce() on each one of the Zombies. Do not forget to delete ALL the
Zombies when you don’t need them anymore.

##### Exercise 02: HI THIS IS BRAIN
- Turn-in directory : ex 02 /
- Files to turn in : Makefile, main.cpp
- Make a program in which you will create a string containing "HI THIS IS BRAIN". Create a string PTR which is a pointer to the string; and a string REF which is a reference to the string.
- Now, display the address in memory of the string. Next, display the address of the string by using string PTR and string REF.
- Last, display the string using the pointer, and finally display it using the reference.
- That’s all, no tricks. The goal of this exercise is to make you demystify references. It isn’t something completely new, it is just another syntax for something that you already know: addresses. Even there are some tiny-little-minuscule details.

##### Exercise 03: Unnecessary violence
- Turn-in directory : ex 03 /
- Files to turn in :Makefile, main.cpp, Weapon.cpp, Weapon.hpp, HumanA.cpp, HumanA.hpp, HumanB.cpp, HumanB.hpp
- Make a Weapon class, that has a type string, and a getType method that returns a const reference to this string. It also has a setType, of course!
- Now, create two classes, HumanA and HumanB, that both have aWeapon, a name, and an attack() function that displays:
```
NAME attacks with his WEAPON_TYPE
```
- HumanA and HumanB are almost-almost the same; there are only two tiny-little-minuscule details:
- While HumanA takes the Weapon in its constructor, HumanB doesn’t.
- HumanB may not always have aWeapon, but HumanA will ALWAYS be armed.
- Make it so the following code produces attacks with "crude spiked club" THEN "some other type of club", in both test cases:
```
int main() {
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}
```
In which case is it appropriate to store the Weapon as a pointer? And as a reference? Why? These are the questions you should ask yourself before turning in this exercise.

##### Exercise 04: Sed is for losers
- Turn-in directory : ex 04 /
- Files to turn in :Makefile, main.cpp, and whatever else you need
- Make a program called replace that takes a filename and two strings, let’s call them s1 and s2, that are NOT empty.
- It will open the file, and write its contents to FILENAME.replace, after replacing every occurrence of s1 with s2.
- All the member functions of the class std::string are allowed, except replace. Use them wisely!
Of course, you will handle errors as best you can. Do not use the C file manipulation functions, because that would be cheating, and cheating’s bad, m’kay?
You will turn in some test files to show your program works.

##### Exercise 05: Karen 2.
- Turn-in directory : ex 05 /
- Files to turn in :Makefile, main.cpp, Karen.hpp, and Karen.cpp
- Do you know Karen? We all do, no? In case you don’t, here are the kind of comments that Karen does:
- "DEBUG" level: Messages in this level contain extensive contextual information. They are mostly used for problem diagnosis. Example: "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
- "INFO" level: These messages contain some contextual information to help trace execution in a production environment. Example: "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
- "WARNING" level: A warning message indicates a potential problem in the system. The system is able to handle the problem by itself or to proceed with this problem anyway. Example: "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
- "ERROR" level: An error message indicates a serious problem in the system. The problem is usually non-recoverable and requires manual intervention. Example: "This is unacceptable, I want to speak to the manager now."

- We are going to automate Karen, she says always the same things. You have to create a class named Karen which will contain the following private member functions:
- void debug( void );
- void info( void );
- void warning( void );
- void error( void );
- Karen also has to have a public function that calls to the private functions depending on the level that is passed as parameter. The prototype of the function is:
```
void complain( std::string level );
```
- The goal of this exercise is to use pointers to member functions. This is not a suggestion, Karen has to complain without using a forest of if/else if/else, she doesn’t hesitate or think twice!
- Submit a main to test that Karen complains a lot. It is okay if you want to use the complains we give as example.

##### Exercise 06: Karen-filter
- Turn-in directory : ex 06 /
- Files to turn in :Makefile, main.cpp, Karen.hpp, and Karen.cpp
- We are going to implement a system to filter if what Karen says is actually important or not, because sometimes we don’t want to pay attention to everything Karen says.
- You have to write the program karenFilter that will receive as a parameter the log level you want to listen to and display all the info that is at this level or above it. For example:
```
$> ./karenFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I’ve been coming here for years an you just started working here last month.
### [ ERROR ]
This is unacceptable, I want to speak to the manager now.
$> ./karenFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
```
There are many ways to filter karen, but one of the best ones is to SWITCH her off ;)