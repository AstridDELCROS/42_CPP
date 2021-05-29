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
# include <cstdlib>

class	ScavTrap {

public:
	ScavTrap(std::string _name);
	ScavTrap(ScavTrap const &scavTrapSrc);
	~ScavTrap();
	ScavTrap&       operator=(ScavTrap const &scavTrap);
	void        	rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
    	void	        beRepaired(unsigned int amount);
    	void	        challengeNewcomer(std::string const &target);

private:
    std::string 	_name;
    int		        _hitPoints;
    int         	_maxHitPoints;
    int         	_energyPoints;
    int         	_maxEnergyPoints;
    int         	_level;
    int         	_meleeAttackDamage;
    int         	_rangedAttackDamage;
    int         	_armorDamageReduction;

};

#endif

