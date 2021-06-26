/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():Form("shrubbery creation", 72, 45, "default"){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):Form("shrubbery creation", 72, 45, target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src):Form(*this = src) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    // name and grade -> const
    this->_target = rhs._target;
    this->_isSigned = rhs._isSigned;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

int     ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!this->_isSigned) {
        std::cout << "Form not signed, can't execute!" << std::endl;
    }
    else {
        if (executor.getGrade() <= getRequiredGradeToExe()) {
            std::string fileName = this->_target + "_shrubbery";
            std::ofstream fd(fileName.c_str());
            fd << "888888888888\n";
            fd << " 8888888888\n";
            fd << "  8888888\n";
            fd << "   88888\n";
            fd << "   ||||\n";
            fd << "    ||\n";
            fd << "   /||\\\n";
            fd.close();
        }
        else {
            throw GradeTooLowException();
        }
    }
    return 0;
}