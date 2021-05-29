/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(){}

Enemy::Enemy(int hp, std::string const &type): _hp(hp), _type(type){}

// Enemy::Enemy(Enemy const &src) {
//     *this = src;
// }

Enemy::~Enemy(){}

Enemy& Enemy::operator=(const Enemy &rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return *this;
}

std::string     Enemy::getType() const {
    return this->_type;
}
int             Enemy::getHP() const {
    return this->_hp;
}
void            Enemy::takeDamage(int damage) {
    if (this->_hp - damage > 0) {
        this->_hp -= damage;
    }
    else {
        this->_hp = 0;
    }
}