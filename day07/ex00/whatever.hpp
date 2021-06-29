/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template<typename T>
void    swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T const &min(T const &a, T const &b) {
    return (a < b ? a : b);
}

template<typename T>
T const &max(T const &a, T const &b) {
    return (a > b ? a : b);
}

#endif