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
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <cstdlib>

int	main() {
	FragTrap 	*D34THTP = new FragTrap("IT54-TP");
	FragTrap    	*CL4PTP = new FragTrap("M0U5-TP");
	ScavTrap	*DOORM4NTP = new ScavTrap("D20R");
	NinjaTrap	*K4R4TETP = new NinjaTrap("MIYAGITP");
	ClapTrap	*B4SIC = new ClapTrap();
	ClapTrap	*CL4PBIS = new ClapTrap("Bis");
	SuperTrap	*SUPER = new SuperTrap("Robocop");

	srand(time(NULL));
	FragTrap    	copyBot(*D34THTP);
	copyBot = *CL4PTP;
	D34THTP->rangedAttack("random player");
	D34THTP->meleeAttack("random player");
	DOORM4NTP->rangedAttack("random player");
	DOORM4NTP->meleeAttack("random player");
	K4R4TETP->rangedAttack("random player");
	K4R4TETP->meleeAttack("random player");
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
	delete(CL4PTP);
	std::cout << "Here come newcomers..." << std::endl;
	DOORM4NTP->challengeNewcomer("newcomer");
	DOORM4NTP->challengeNewcomer("another newcomer");
	K4R4TETP->ninjaShoebox(*B4SIC);
	std::cout << "Default clap becomes a new clap called Bis and gets an armor!" << std::endl;
	B4SIC = CL4PBIS;
	K4R4TETP->ninjaShoebox(*B4SIC);
	delete(B4SIC);
	K4R4TETP->ninjaShoebox(*D34THTP);
	delete(D34THTP);
	K4R4TETP->ninjaShoebox(*DOORM4NTP);
	delete(DOORM4NTP);
	K4R4TETP->ninjaShoebox(*K4R4TETP);
	SUPER->rangedAttack("player");
	SUPER->meleeAttack("player");
	SUPER->vaulthunter_dot_exe("player");
	SUPER->ninjaShoebox(*K4R4TETP);
	delete(K4R4TETP);
	delete(SUPER);
	return 0;
}
