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

#include "easyfind.hpp"

template<typename T>
void	printContainer(T const &container)
{
    typename T::const_iterator currentContainer, end = container.end();
    std::cout << "Content:" << std::endl;
    for (currentContainer = container.begin(); currentContainer != end; currentContainer++)
        std::cout << "- " << *currentContainer << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
}

int main(void)
{
    std::cout << "Play with vectors\n";
    int result;
    std::vector<int> vect(2, 10);
    std::cout << "2 ints with value 10" << std::endl;
    printContainer(vect);
    vect.push_back(42);
    std::cout << "We add the value 42" << std::endl;
    printContainer(vect);
    try {
        std::cout << "we look for 42.." << std::endl;
        result = easyfind(vect, 42);
        printContainer(vect);
        std::cout << "Needle found." << result << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what();
    }
    std::cout << "we look for 33.." << std::endl;
    try {
        result = easyfind(vect, 33);
        printContainer(vect);
        std::cout << "Needle found." << result << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what();
    }
    std::cout << "We add the value 33" << std::endl;
    vect.push_back(33);
        try {
        result = easyfind(vect, 33);
        printContainer(vect);
        std::cout << "Needle found." << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what();
    }
    return (0);
}