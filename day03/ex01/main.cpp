/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
# include <iostream>
# include <cstdlib>

int	main() {
	FragTrap 	*D34THTP = new FragTrap("IT54-TP");
	FragTrap    *CL4PTP = new FragTrap("M0U5-TP");
	ScavTrap	*DOORM4NTP = new ScavTrap("D20R");

	srand(time(NULL));
	FragTrap    copyBot(*D34THTP);
	copyBot = *CL4PTP;
	D34THTP->rangedAttack("random player");
	D34THTP->meleeAttack("random player");
	D34THTP->takeDamage(4);
	D34THTP->takeDamage(30);
	D34THTP->beRepaired(20);
	D34THTP->vaulthunter_dot_exe("random player");
	D34THTP->vaulthunter_dot_exe("random player");
	D34THTP->vaulthunter_dot_exe("random player");
	D34THTP->vaulthunter_dot_exe("random player");
	D34THTP->vaulthunter_dot_exe("random player");
	copyBot.vaulthunter_dot_exe("random player");
	CL4PTP->vaulthunter_dot_exe("random player");
	delete(D34THTP);
	delete(CL4PTP);
	std::cout << "Here come newcomers" << std::endl;
	DOORM4NTP->challengeNewcomer("newcomer");
	DOORM4NTP->challengeNewcomer("newcomer");
	delete(DOORM4NTP);
	return 0;
}
