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

#include "Span.hpp"

void testShortSpan(Span sp) {
    try {
        std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "-> Exception catched" << std::endl;
        std::cerr << e.what() << std::endl;
    }
}

void testLongSpan(Span sp) {
    try {
        std::cout << "Longest span = " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "-> Exception catched" << std::endl;
        std::cerr << e.what() << std::endl;
    }
}

void    schoolTests() {
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void    homemadeTests() {
	std::cout << "Calling exceptions..." << std::endl;
	Span sp = Span(2);
	testShortSpan(sp);
	testLongSpan(sp);
	try {
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
	} catch (const std::exception& e) {
		std::cout << "-> Exception catched" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "random tests" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	Span sp2 = Span(3);
	std::cout << "-> {42, 10, 33}" << std::endl;
	sp2.addNumber(42);
	sp2.addNumber(10);
	sp2.addNumber(33);
	std::cout << "shortest: " << sp2.shortestSpan() << std::endl;
	std::cout << "longest : " << sp2.longestSpan() << std::endl;
	std::cout << "------------------------------------------" << std::endl;
    Span spBig = Span(10001);
	std::cout << "-> {0, 1, ...,  9999, 10000}" << std::endl;
	std::vector<int> biggy(10001);
	for (unsigned long i = 0; i < biggy.size(); i++) {
		biggy[i] = i + 1;
	}
	spBig.addNumber(biggy.begin(), biggy.end());
	try {
		spBig.addNumber(biggy.begin(), biggy.end());
	} catch (const std::exception& e) {
		std::cout << "-> Exception catched" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	std::cout << "shortest: " << spBig.shortestSpan() << std::endl;
	std::cout << "longest : " << spBig.longestSpan() << std::endl;
}

int main() {
    std::cout << "\033[0;31mSchool Tests\033[0m" << std::endl;
    schoolTests();
    std::cout << "\033[0;31mHome-made Tests\033[0m" << std::endl;
    homemadeTests();
    return 0;
}