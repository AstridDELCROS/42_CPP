/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include <string.h>

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		MateriaSource&	operator=(const MateriaSource& rhs);
		~MateriaSource();
		void		learnMateria(AMateria* materia);
        	AMateria*	createMateria(const std::string& type);
	private:
		AMateria	*_memorizedMateria[4];
};

#endif
