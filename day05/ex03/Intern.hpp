/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"

class Intern {
	private:
        struct createForms {
            std::string _formName;
            Form*       (*f)(std::string &target);
        };
        static createForms   _arr[3];
        static Form *makePresidentialPardonForm(std::string &target);
        static Form *makeRobotomyRequestForm(std::string &target);
        static Form *makeShrubberyCreationForm(std::string &target);
	public:
		Intern();
		Intern(const Intern& src);
		Intern&		operator=(const Intern& rhs);
		virtual     ~Intern();
		Form*       makeForm (std::string formName, std::string target);
};

#endif
