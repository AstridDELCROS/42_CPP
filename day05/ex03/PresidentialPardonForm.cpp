/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("presidential pardon", 25, 5, "default"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):Form("presidential pardon", 25, 5, target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src):Form(*this = src) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    // name and grade -> const
    this->_target = rhs._target;
    this->_isSigned = rhs._isSigned;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

int     PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (!this->_isSigned) {
        std::cout << "Form not signed, can't execute!" << std::endl;
    }
    else {
        if (executor.getGrade() <= getRequiredGradeToExe()) {
            std::cout << executor.getName() << "has been pardoned by Zafod Beeblebrox" << std::endl;
        }
        else {
            throw GradeTooLowException();
        }
    }
    return 0;
}
