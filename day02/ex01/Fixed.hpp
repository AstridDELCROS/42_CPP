/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:22:50 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class   Fixed {
    
public:
    Fixed();
    Fixed(Fixed const &fixed);
    Fixed(int const intValue);
    Fixed(float const floatValue);
    ~Fixed();
    Fixed&  operator=(Fixed const &fixed);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    private:
    int     _value;
    static const int    _fractionalBits = 8;
    
};

std::ostream&   operator<<(std::ostream &output, Fixed const &fixed);

#endif
