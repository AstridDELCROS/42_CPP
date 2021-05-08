/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:33:48 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap {

public:
	ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(ClapTrap const &clapTrapSrc);
	~ClapTrap();
	ClapTrap&       operator=(ClapTrap const &clapTrap);
	void            rangedAttack(std::string const &target);
    	void	        meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
    	void	        beRepaired(unsigned int amount);

protected:
	std::string 	_name;
	int		_hitPoints;
    	int         	_maxHitPoints;
    	int         	_energyPoints;
    	int         	_maxEnergyPoints;
    	int         	_level;
    	int         	_meleeAttackDamage;
    	int         	_rangedAttackDamage;
    	int         	_armorDamageReduction;

};

#endif

