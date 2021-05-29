/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <iostream>
#include <cstdlib>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

private:
    Character();
    std::string _name;
    int         _ap;
    AWeapon     *_weapon;

public:
    Character(std::string const &name);
    Character(const Character &src);
    Character &operator=(const Character &rhs);
    ~Character();
    std::string getName() const;
    int         getAP() const;
    AWeapon *getWeapon() const;
    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);
};
std::ostream &operator<<(std::ostream &output, const Character &rhs);

#endif