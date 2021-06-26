/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat jean("Jean", 1);
    Bureaucrat michel("Michel", 150);
    Bureaucrat jean_michel("Jean-Michel", 42);
    Bureaucrat jean_mich("Jean-Mich", 20);
    PresidentialPardonForm ppf("freedom");
    RobotomyRequestForm robot("robotizer");
    ShrubberyCreationForm shrubb("shrubb");
    std::cout << jean << ", " << michel << ", " << jean_michel << "\n";
    std::cout << "\033[0;31mLet's make bureaucrats sign and execute the forms: \n\033[0m";
    try {
        michel.signForm(ppf);
        std::cout << ppf << std::endl;
        michel.executeForm(ppf);
        std::cout << std::endl;
        jean_mich.signForm(ppf);
        std::cout << ppf << std::endl;
        jean_mich.executeForm(ppf);
        std::cout << std::endl;
        jean.signForm(robot);
        jean.executeForm(robot);
        std::cout << robot << std::endl;
        std::cout << std::endl;
        jean_michel.signForm(shrubb);
        jean_michel.executeForm(shrubb);
        std::cout << shrubb << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}

