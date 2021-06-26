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

#include "Form.hpp"

Form::Form():_name("default"), _isSigned(false), _requiredGradeToSign(150), _requiredGradeToExe(150){};

Form::Form(const std::string name, const int requiredGradeToSign, const int requiredGradeToExe, std::string target):_name(name), _isSigned(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExe(requiredGradeToExe), _target(target){
    if (this->_requiredGradeToSign > 150 || this->_requiredGradeToExe > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else if (this->_requiredGradeToSign < 1 || this->_requiredGradeToExe < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
}

Form::Form(const Form& src): _name(src._name), _requiredGradeToSign(src._requiredGradeToSign), _requiredGradeToExe(src._requiredGradeToExe) {
    *this = src;
}

Form& Form::operator=(const Form &rhs) {
    // name and grade -> const
    this->_isSigned = rhs._isSigned;
    return *this;
}

Form::~Form(){}

std::string Form::getName() const {
    return this->_name;
}

int         Form::getRequiredGradeToSign() const {
    return this->_requiredGradeToSign;
}

int         Form::getRequiredGradeToExe() const {
    return this->_requiredGradeToExe;
}

bool        Form::getSignState() {
    return this->_isSigned;
}

void        Form::beSigned(Bureaucrat &bureaucrat) {
    if (this->_requiredGradeToSign < bureaucrat.getGrade())
        throw Bureaucrat::GradeTooLowException();
    else
        this->_isSigned = true;
}

const char  *Form::GradeTooHighException::what(void) const throw() {
    return ("grade is too high.");
};

const char  *Form::GradeTooLowException::what(void) const throw() {
    return ("Grade is too low.");
};

std::ostream&   operator<<(std::ostream &output, Form &rhs) {
    output << "Form " << rhs.getName() << "-> Signed : " << rhs.getSignState() << std::endl;
    output << "Minimum grade to sign : " << rhs.getRequiredGradeToSign() << std::endl;
    output << "Minimum grade to execute : " << rhs.getRequiredGradeToExe() << std::endl;
    return output;
}
