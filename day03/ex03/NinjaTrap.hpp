/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:33:48 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class	NinjaTrap : public ClapTrap {

public:
	NinjaTrap(std::string _name);
	NinjaTrap(NinjaTrap const &ninjaTrapSrc);
	~NinjaTrap();
	NinjaTrap&	operator=(NinjaTrap const &ninjaTrap);
    	void	        ninjaShoebox(ClapTrap &clapTrap);
    	void	        ninjaShoebox(FragTrap &fragTrap);
    	void	        ninjaShoebox(ScavTrap &scavTrap);
    	void	        ninjaShoebox(NinjaTrap &ninjaTrap);

};

#endif

