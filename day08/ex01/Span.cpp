/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char * Span::NoSpanException::what() const throw() {
    return "There's no span here.";
}

const char * Span::SpanFullException::what() const throw() {
    return "The span is full!";
}

Span::Span(unsigned int n) : _n(n), _v() {}

Span::Span(Span const &src) : _n(src._n), _v(src._v) {}

Span &Span::operator=(Span const &rhs) {
    _n = rhs._n;
    _v = rhs._v;

    return *this;
}

Span::~Span() {}

void    Span::addNumber(int i) {
    if (_v.size() >= _n)
        throw SpanFullException();
    _v.push_back(i);
}

unsigned int    Span::shortestSpan() const {
    if (_v.size() <= 1)
        throw NoSpanException();
    std::vector<int> sorted(_v);
    std::sort(sorted.begin(), sorted.end());
    std::vector<int>::iterator it = sorted.begin();
    std::vector<int>::iterator ite = sorted.end() - 1;

    unsigned int span, tmp;
    span = UINT_MAX;
    for (*it = 0; it < ite; it++) {
        tmp = *(it + 1) - *(it);
        if (tmp < span)
            span = tmp;
    }
    return span;
}

unsigned int    Span::longestSpan() const {
    if (_v.size() <= 1)
        throw NoSpanException();
    int min = *(std::min_element(_v.begin(), _v.end()));
    int max = *(std::max_element(_v.begin(), _v.end()));
    
    return max - min; 
}

std::ostream	&operator<<(std::ostream &output, Span const &rhs) {
	(void)rhs;
	return (output);
}