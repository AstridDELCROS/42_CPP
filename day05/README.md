## C++ Pool - day5

#### Week 1 revisions, Exceptions

**Contents**

- Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!
- Exercise 01: Form up, maggots!
- Exercise 02: No, you need form 28B, not 28C
- Exercise 03: At least this beats coffee-making

#### Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!
- Turn-in directory : ex 00 /
- Files to turn in : Bureaucrat.hpp Bureaucrat.cpp main.cpp
Today, we’re going to create an artificial nightmare of offices, corridors, forms, and waiting in line. Sounds fun? No? Too bad.

- First, we start by the smallest cog in the vast bureaucratic machine : theBureaucrat.
- It must have a constant name, and a grade, that ranges from 1 (highest possible) to 150 (lowest possible). Any attempt to create a Bureaucrat with an invalid grade must throw an exception, which will be either aBureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
- You will provide getters for both these attributes (getNameandgetGrade), and two functions to increment or decrement the grade. Both these functions will throw the same
exceptions as before if the grade gets too high or too low. Remember, grade 1 is highest, 150 is lowest, so incrementing a grade 3 gives you a grade 2...
The exceptions you throw must be catchable by a block like :
```
try {
    /* do some stuff with bureaucrats */
} catch (std::exception & e) {
    /* handle exception */
}
```
You will provide an overload of the _<<_ operator toostreamthat outputs something like<name>, bureaucrat grade <grade>.
Of course, you will provide a main function to prove you did all this well.

#### Exercise 01: Form up, maggots!
- Turn-in directory : ex 01 /
- Files to turn in : Same as before + Form.cpp Form.hpp
Now that we have bureaucrats, better give them something to do with their time. What better occupation than a stack of forms to fill out?
- Make a Form class. It has a name, a boolean indicating whether it is signed (at the beginning, it’s not), a grade required to sign it, and a grade required to execute it.
- The name and grades are constant, and all these attributes are private (not protected).
- The grades are subject to the same constraints as in theBureaucrat, and exceptions will be thrown if any of them are out of bounds,Form::GradeTooHighException and Form::GradeTooLowException.
- Same as before, make getters for all attributes, and an overload of the _<<_ operator too stream that completely describes the state of the form.
- You will also add a beSigned function that takes aBureaucrat, and makes the form signed if the bureaucrat’s grade is high enough. Always remember, grade 1 is better than grade 2. If the grade is too low, throw aForm::GradeTooLowException.
- Also add a signForm function to theBureaucrat. If the signing is successful, it will print something like"<bureaucrat> signs <form", otherwise it will print something like"<bureaucrat> cannot sign <form> because <reason>".
Add whatever’s needed to test this to your main.

#### Exercise 02: No, you need form 28B, not 28C...
- Turn-in directory : ex 02 /
- Files to turn in : Same as before + ShrubberyCreationForm.[hpp,cpp] RobotomyRequestForm.[hpp,cpp] PresidentialPardonForm.[hpp,cpp]
Now that you have basic forms, you will make a few forms that actually do something.

Create a few concrete forms :
- ShrubberyCreationForm(Required grades : sign 145, exec 137). Action : Create a file called <target>_shrubbery, and write ASCII trees inside it, in the current directory.
- RobotomyRequestForm(Required grades : sign 72, exec 45). Action : Makes some drilling noises, and tells us that <target> has been robotomized successfully 50% of the time. the rest of times, tells us it’s a failure.
- PresidentialPardonForm(Required grades : sign 25, exec 5). Action : Tells us <target> has been pardoned by Zafod Beeblebrox.

All of these will have to take only one parameter in their constructor, which will represent the target of the form. For example, "home" if you want to plant a shrubbery at home. Remember the form’s attributes need to remain private, and in the base class.

Now you need to add a method execute(Bureaucrat const & executor) const to the base form, and implement a method actually executing the form’s action in all the concrete forms.
You have to check that the form is signed, and that the bureaucrat attempting to execute the form has a high enough grade, else you will throw an appropriate exception. Whether you want to make these checks in every concrete class or make the check in the base class then calling another method to actually execute the action is up to you, but one way is obviously prettier than the other one. In any event, the base form must be an abstract class.

Finish this by adding an executeForm(Form const & form) function to the bureaucrat. It must attempt to execute the form, and if it’s a success, print something like <bureaucrat> executes <form>. If not, print an explicit error message. Add whatever you need to your main to test that everything works.

#### Exercise 03: At least this beats coffee-making
- Turn-in directory : ex 03 /
- Files to turn in : Same as before + Intern.hpp Intern.cpp

Because filling out forms is annoying enough, it would just be cruel to ask our bureaucrats to write them entirely by themselves. No, we’ll just have an intern do that.

You’re going to create the Intern class. The intern has no name, no grade, no defining characteristics whatsoever, we only care that it does its job.
The intern has one important thing, the makeForm function. It takes two strings, the first representing the name of a form, and the second one being the target for the form. It will return, as a pointer toForm, a pointer to whichever concrete form class is represented by the first parameter, initialized with the second parameter. It will print something like "Intern creates <form>"to the standard output. If the requested form is not known, print an explicit error message.
For example, this would create a RobotomyRequestForm targeted on"Bender":
```
{
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}
```
Your main must, of course, test all of this.