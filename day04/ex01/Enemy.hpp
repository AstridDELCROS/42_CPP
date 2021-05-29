/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <cstdlib>

class Enemy {

private:
    Enemy();

protected:
    int             _hp;
    std::string     _type;

public:
    Enemy(int hp, std::string const &type);
    Enemy(Enemy const &src);
    Enemy &operator=(const Enemy &rhs);
    virtual         ~Enemy();
    std::string     getType() const;
    int             getHP() const;
    virtual void    takeDamage(int damage);
};

#endif