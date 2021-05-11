/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:33:48 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <ctype.h>
# include <stdio.h>

class	Victim {

public:
	Victim();
	Victim(std::string _name);
	Victim(Victim const &victimeSrc);
	~Victim();
	Victim&         operator=(Victim const &victimSrc);
    std::string     getName() const;
    virtual void    getPolymorphed() const;

protected:
    std::string     _name;

};
std::ostream&   operator<<(std::ostream &output, Victim const &victimeSrc);

#endif

