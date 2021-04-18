/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/02 03:30:31 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>

ZombieHorde::ZombieHorde(int n)
{
	srand (time(NULL));
	std::string	names[] = {"Alix", "Basile", "Camille", "Dimitri"};

	this->hordeSize = n;
	this->horde = new Zombie[this->hordeSize];
	for (int i = 0; i < this->hordeSize; i++)
		this->horde[i].init(names[rand() % 4], "walker");
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->horde;
	std::cout << "Horde killed on the heap." << std::endl;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->hordeSize; i++)
	{
		this->horde[i].announce();
	}
}
