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

#include "whatever.hpp"

int schoolTests() {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

int homemadeTests() {
    int e = 4;
    int f = 'a';
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::string g = "chaine1";
    std::string h = "chaine2";
    std::string i = "chaine2";
    std::cout << "g = " << g << ", h = " << h << ", i = " << i << std::endl;
    ::swap(g, h);
    std::cout << "===============SWAP===============\n";
    std::cout << "g = " << g << ", h = " << h << ", i = " << i << std::endl;
    std::cout << "g = " << &g << ", h = " << &h << ", i = " << &i << std::endl;
    std::cout << "min( g, h ) = " << &::min( g, i ) << std::endl;
    std::cout << "max( g, h ) = " << &::max( g, i ) << std::endl;
    return 0;
}

int main() {
    std::cout << "\033[0;31mSchool Tests\033[0m" << std::endl;
    schoolTests();
    std::cout << "\033[0;31mHome-made Tests\033[0m" << std::endl;
    homemadeTests();
    return 0;
}