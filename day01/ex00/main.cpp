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

# include <string>
# include <iostream>
# include "Pony.hpp"

void	onTheHeap(void)
{
	Pony *jumper = new Pony("Jolly Jumper");
	jumper->saysHello();
	delete jumper;
}

void	onTheStack(void)
{
	Pony penny = Pony("Penny");
	penny.saysHello();
	penny.setBehavior("bad");
	penny.talk();
}

int	main()
{
	onTheHeap();
	onTheStack();
	return (0);
}
