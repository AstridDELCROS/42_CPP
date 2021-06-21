/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		Bureaucrat();
		std::string _name;
        int         _grade;
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat&		operator=(const Bureaucrat& rhs);
		virtual ~Bureaucrat();
        std::string getName() const;
        int         getGrade() const;
        void        increaseGrade();
        void        decreaseGrade();
		void		signForm(Form &form);
		void		executeForm (Form const &form);
        
        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
		};
        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
		};
};
std::ostream&   operator<<(std::ostream &output, Bureaucrat &rhs);

#endif
