/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:33:48 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {

public:
	FragTrap();
	FragTrap(std::string _name);
	FragTrap(FragTrap const &fragTrapSrc);
	~FragTrap();
	FragTrap&	operator=(FragTrap const &fragTrap);
	void	        vaulthunter_dot_exe(std::string const &target);
};

#endif

