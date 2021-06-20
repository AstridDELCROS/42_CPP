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

int main() {
    Bureaucrat jean("Jean", 1);
    Bureaucrat michel("Michel", 150);
    Bureaucrat jean_michel("Jean-Michel", 120);
    Form contract("contract", 42, 120);
    std::cout << jean << ", " << michel << ", " << jean_michel << "\n";
    
    std::cout << "Let's try to upgrade and then downgrade Jean: \n";
    try
    {
        jean.increaseGrade();
        std::cout << jean.getName() << " was upgraded to " << jean.getGrade() << " :)\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        jean.decreaseGrade();
        std::cout << jean.getName() << " was downgraded to " << jean.getGrade() << " :(\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Let's try to downgrade and then upgrade Michel: \n";
    try
    {
        michel.decreaseGrade();
        std::cout << michel.getName() << " was downgraded to " << michel.getGrade() << " :(\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        michel.increaseGrade();
        std::cout << michel.getName() << " was upgraded to " << michel.getGrade() << " :)\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Let's make bureaucrats sign the contract: \n";
    try
    {
        michel.signForm(contract);
        std::cout << contract << std::endl;
        jean.signForm(contract);
        std::cout << contract << std::endl;
        jean_michel.signForm(contract);
        std::cout << contract << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

