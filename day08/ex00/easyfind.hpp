/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <string>

class	NeedleNotFoundException : public std::exception {
	public:
		const char* what() const throw();
};


const char* NeedleNotFoundException::what() const throw() {
    return "No needle found.\n\n";
}

template<typename T>
int easyfind(T haystack, int needle){
    typename T::iterator found = std::find(haystack.begin(), haystack.end(), needle);
    if (found == haystack.end())
        throw NeedleNotFoundException();
    return needle;
}

#endif