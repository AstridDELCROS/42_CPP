/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/02 03:30:31 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int const intValue):_value(intValue << _fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const floatValue):_value(floatValue * (1 << _fractionalBits)) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::toInt() const {
	return this->_value >> this->_fractionalBits;
}

float	Fixed::toFloat() const {
	return (float)this->_value / (float)(1 << this->_fractionalBits);
}

int     Fixed::getRawBits() const {
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed&	Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream &output, Fixed const &fixed) {
	output << fixed.toFloat();
	return output;
}
