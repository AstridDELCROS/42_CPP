/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm():Form("robotomy request", 72, 45, "default"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):Form("robotomy request", 72, 45, target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src):Form(*this = src) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    // name and grade -> const
    this->_target = rhs._target;
    this->_isSigned = rhs._isSigned;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

int     RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (!this->_isSigned) {
        std::cout << "Form not signed, can't execute!" << std::endl;
    }
    else {
        if (executor.getGrade() <= getRequiredGradeToExe()) {
            std::cout << "TZIIIIITRRRRrrr" << std::endl;
            srand(time(NULL));
            if (rand() % 2) {
                std::cout << this->_target << " has been robotomized!" << std::endl;
            }
            else {
                std::cout << this->_target << " could not be robotomized!" << std::endl;
            }
        }
        else {
            throw GradeTooLowException();
        }
    }
    return 0;
}
