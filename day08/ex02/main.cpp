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

#include "Mutantstack.hpp"

void    schoolTests() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void    homemadeTests() {
    MutantStack<int> mstack;
    mstack.push(42);
    mstack.push(33);
    std::cout << "Stack size : " << mstack.size() << ". Last element added: " << mstack.top() << std::endl;
    std::cout << "Let's delete it.." << std::endl;
    mstack.pop();
    std::cout << "Stack new size : " << mstack.size() << std::endl;
    std::cout << "============== Iteration in a copy of stack ==============" << std::endl;
    MutantStack<int> copyStack(mstack);
    for (int i = 10; i < 15; i++) {
        copyStack.push(i);
    }
    MutantStack<int>::iterator it = copyStack.begin();
    MutantStack<int>::iterator ite = copyStack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << "Stack value is: " << *it << std::endl;
        ++it;
    }
}

int main() {
    std::cout << "\033[0;31mSchool Tests\033[0m" << std::endl;
    schoolTests();
    std::cout << "\033[0;31mHome-made Tests\033[0m" << std::endl;
    homemadeTests();
    return 0;
}