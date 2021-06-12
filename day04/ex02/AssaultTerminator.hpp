/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>

class AssaultTerminator : public ISpaceMarine {

public:
    AssaultTerminator(void);
    AssaultTerminator(AssaultTerminator const &src);
    AssaultTerminator &operator=(AssaultTerminator const &rhs);
    virtual ~AssaultTerminator();
    virtual ISpaceMarine* clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;
};

#endif