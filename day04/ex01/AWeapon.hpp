/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
# include <cstdlib>

class AWeapon {

private:
    AWeapon();
protected:
    std::string     _name;
    int             _apcost;
    int             _damage;

public:
    AWeapon(std::string const &name, int apcost, int damage);
    AWeapon(const AWeapon &src);
    AWeapon &operator=(const AWeapon &rhs);
    virtual         ~AWeapon();
    std::string     getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void    attack() const = 0;
};

#endif