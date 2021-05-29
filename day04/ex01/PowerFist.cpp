/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50){}

PowerFist::~PowerFist(){}

PowerFist::PowerFist(PowerFist const &src):AWeapon(src){}

PowerFist&    PowerFist::operator=(const PowerFist &rhs) {
    AWeapon::operator=(rhs);
    return *this;
}

void            PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}