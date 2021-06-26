/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& src) {
    *this = src;
}

Intern& Intern::operator=(const Intern &rhs) {
    (void)rhs;
    return *this;
}

Intern::~Intern(){}

Intern::createForms Intern::_arr[3] = {

    {"presidential pardon", &Intern::makePresidentialPardonForm},
    {"robotomy request", &Intern::makeRobotomyRequestForm},
    {"shrubbery creation", &Intern::makeShrubberyCreationForm},
};

Form    *Intern::makePresidentialPardonForm(std::string &target) {
    return (new PresidentialPardonForm(target));
}

Form    *Intern::makeRobotomyRequestForm(std::string &target) {
    return (new RobotomyRequestForm(target));
}

Form    *Intern::makeShrubberyCreationForm(std::string &target) {
    return (new ShrubberyCreationForm(target));
}

Form    *Intern::makeForm(std::string formName, std::string target)
{
    for (int i = 0; i < 3; i++)
    {
        if (formName == Intern::_arr[i]._formName)
        {
            std::cout << "Intern makes " << formName << " form." << std::endl;
            return (Intern::_arr[i].f(target));
        }
    }
    std::cout << "Form creation failed." << std::endl;
    return (NULL);
}
