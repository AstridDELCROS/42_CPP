/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:33:48 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <ctype.h>
# include <stdio.h>
# include "Victim.hpp"

class	Sorcerer {

public:
	Sorcerer(std::string _name, std::string _title);
	Sorcerer(Sorcerer const &sorcererSrc);
	~Sorcerer();
	Sorcerer&       operator=(Sorcerer const &sorcererSrc);
    std::string     getName() const;
    std::string     getTitle() const;
    void            polymorph(Victim const &victim) const;

private:
    std::string     _name;
    std::string     _title;

};
std::ostream&   operator<<(std::ostream &output, Sorcerer const &sorcererSrc);

#endif

