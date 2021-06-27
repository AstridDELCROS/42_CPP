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

#include "Base.hpp"
# include <iostream>

Base    *generate() {
    std::srand(std::time(0));
    int random = std::rand() % 3;
    if (random == 0)
        return new A;
    else if (random == 1)
        return new B;
    else if (random == 2)
        return new C;
    return NULL;
}

void    identify(Base* p) {
    if (dynamic_cast<A *>(p))
        std::cout << "Base is an A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "Base is a B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "Base is a C\n";
}

void    identifyFromRef(Base& p) {
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A\n";
        return;
    }
    catch(const std::exception& e) {
        // std::cerr << e.what() << '\n';
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B\n";
        return;
    }
    catch(const std::exception& e) {
        // std::cerr << e.what() << '\n';
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C\n";
        return;
    }
    catch(const std::exception& e) {
        // std::cerr << e.what() << '\n';
    }
}

int main() {
    Base *test = generate();
    identify(test);
    identifyFromRef(*test);
    delete test;
    return 0;
}