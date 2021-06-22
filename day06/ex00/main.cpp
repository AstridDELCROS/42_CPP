/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <cmath>
#include <climits>

void    convertToChar(double dd) {
	std::cout << "char: ";
	const char c = static_cast<char>(dd);
	const int i = static_cast<int>(dd);
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "impossible";
	else if (!std::isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << std::endl;
}

void	convertToInt(double dd) {
	std::cout << "int: ";
	long int i = static_cast<long int>(dd);
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;
}

void	convertToDouble(double dd, const unsigned int p) {
	std::cout << "double: " << std::setprecision(p) << std::fixed << dd << std::endl;
}

void	convertToFloat(double dd, const unsigned int p) {
	float f = static_cast<float>(dd);
	std::cout << "float: " << std::setprecision(p) << std::fixed << f << "f" << std::endl;
}

unsigned int	getPrecision(const char *str) {
	while (*str && *str != '.')
		str++;
	if (!*str)
		return (1);
	int i = 1;
	while (str[i] && isdigit(str[i]))
		i++;
	return (i - 1);
}

int		main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Wrong number of args." << std::endl;
		return (1);
	}
	double dd = std::atof(argv[1]);
	convertToChar(dd);
	convertToInt(dd);
	convertToFloat(dd, getPrecision(argv[1]));
	convertToDouble(dd, getPrecision(argv[1]));
	return (0);
}
