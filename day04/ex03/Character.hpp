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
# include "ICharacter.hpp"
# include <string.h>

class Character: public ICharacter
{
	public:
		Character(std::string name);
		Character(const Character& src);
		~Character();

		Character&			operator=(const Character& rhs);
		const std::string&	getName() const;
        void 				equip(AMateria* m);
        void				unequip(int idx);
        void				use(int idx, ICharacter& target);
	private:
		std::string	_name;
		AMateria*	_inventory[4];

		Character();
};

#endif