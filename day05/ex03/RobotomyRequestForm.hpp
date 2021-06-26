/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		RobotomyRequestForm&		operator=(const RobotomyRequestForm& rhs);
		virtual ~RobotomyRequestForm();
        int execute(Bureaucrat const & executor) const;
};

#endif
