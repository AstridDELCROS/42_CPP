/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name) {
    if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else {
        this->_grade = grade;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) {
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs) {
    this->_grade = rhs.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int         Bureaucrat::getGrade() const {
    return this->_grade;
}

void        Bureaucrat::increaseGrade() {
    if (this->_grade == 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else {
        this->_grade--;
    }
}

void        Bureaucrat::decreaseGrade() {
    if (this->_grade == 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else {
        this->_grade++;
    }
}

void    Bureaucrat::signForm(Form &form) {
    if (form.getSignState())
		std::cout << this->_name << " cannot sign " << form.getName() << " because it is already signed" << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->_name << " signs " << form.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
		}
	}
}

const char  *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("Grade too high.");
};

const char  *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return ("Grade too low.");
};

std::ostream&   operator<<(std::ostream &output, Bureaucrat &rhs) {
    output << rhs.getName() << ": " << rhs.getGrade();
    return output;
}
