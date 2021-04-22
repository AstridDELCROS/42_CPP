/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/02 03:30:31 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include "ZombieEvent.hpp"

int	main(void)
{
	Zombie		*zombieOnTheHeap;
	Zombie		zombieOnTheStack("Jean-Michel", "Victime");
	ZombieEvent	event("runner");
	zombieOnTheHeap = event.newZombie("random");
	zombieOnTheHeap->announce();
	delete zombieOnTheHeap;
	event.setZombieType("walker");
	event.randomChump();
	delete zombieOnTheHeap;
	zombieOnTheStack.announce();
	return (0);
}
