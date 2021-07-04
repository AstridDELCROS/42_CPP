/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class   MutantStack : public std::stack<T> {
    public:
        MutantStack();
        MutantStack(MutantStack<T> const &src);
        MutantStack<T>  &operator=(MutantStack<T> const &rhs);
        virtual ~MutantStack();
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator  begin() {
            return (this->c.begin());
        };
        iterator  end() {
            return (this->c.end());
        };
};

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>(src) {
}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const &rhs) {
    if (this != &rhs)
        std::stack<T>::operator=(rhs);
    return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack() {
}

#endif