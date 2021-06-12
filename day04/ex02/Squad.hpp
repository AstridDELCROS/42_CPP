/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad : public ISquad {

private:
	int _unitCount;
	ISpaceMarine **_units;
public:
    Squad();
    Squad(Squad const &src);
    Squad&operator=(Squad const &rhs);
    ~Squad();
    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);
};

#endif