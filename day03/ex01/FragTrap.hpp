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

class	FragTrap {

public:
	FragTrap(std::string _name);
	FragTrap(FragTrap const &fragTrapSrc);
	~FragTrap();
	FragTrap&	operator=(FragTrap const &fragTrap);
	void		rangedAttack(std::string const &target);
    	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
    	void		beRepaired(unsigned int amount);
    	void		vaulthunter_dot_exe(std::string const &target);

private:
	std::string	_name;
	int		_hitPoints;
	int		_maxHitPoints;
	int		_energyPoints;
	int		_maxEnergyPoints;
	int		_level;
	int		_meleeAttackDamage;
	int		_rangedAttackDamage;
	int		_armorDamageReduction;

};

#endif

