/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:33:48 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:
	ScavTrap(std::string _name);
	ScavTrap(ScavTrap const &scavTrapSrc);
	~ScavTrap();
	ScavTrap&       operator=(ScavTrap const &scavTrap);
    	void	        challengeNewcomer(std::string const &target);
};

#endif

