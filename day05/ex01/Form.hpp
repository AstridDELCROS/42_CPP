/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		Form();
		const std::string   _name;
        bool                _isSigned;
        const int           _requiredGradeToSign;
        const int           _requiredGradeToExe;
	public:
		Form(const std::string name, const int requiredGradeToSign, const int requiredGradeToExe);
		Form(const Form& src);
		Form&		operator=(const Form& rhs);
		virtual ~Form();
        std::string getName() const;
        int         getRequiredGradeToSign() const;
        int         getRequiredGradeToExe() const;
        bool        getSignState();
        void        beSigned(Bureaucrat &bureaucrat);

        
        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
		};
        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
		};
};
std::ostream&   operator<<(std::ostream &output, Form &rhs);

#endif
