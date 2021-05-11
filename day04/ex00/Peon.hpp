/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:33:48 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include <ctype.h>
# include <stdio.h>
# include "Victim.hpp"

class	Peon : public Victim {

public:
	Peon(std::string _name);
	Peon(Peon const &peonSrc);
	~Peon();
	Peon&	operator=(Peon const &peonSrc);
    void    getPolymorphed() const;

};

#endif

