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

#include "Array.hpp"

int main() {
    std::cout << "Default constructor\n";
    Array   <int>defaultArr;
    std::cout << defaultArr.size() << std::endl;
    std::cout << "-- Creation of an array of n elements --\n";
    Array   <int>array(3);
    std::cout << array << std::endl;
    std::cout << "-- Instanciation of the array of n elements --\n";
        std::cout << "Size: " << array.size() <<std::endl;
        for (unsigned int i = 0; i < array.size(); i++) {
            array[i] = i + 1;
        }
    std::cout << array << std::endl;
    std::cout << "Lets try to get an element out of limits.." << std::endl;
    try {
        array[42] = 11;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    return 0;
}