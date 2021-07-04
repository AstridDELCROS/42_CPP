/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <algorithm>
#include <vector>
#include <climits>
#include <iostream>

class Span {
    private:
        unsigned int        _n;
        std::vector<int>    _v;
    
        Span();

        class NoSpanException : public std::exception {
            virtual const char * what() const throw();
        };
        class SpanFullException : public std::exception {
            virtual const char * what() const throw();
        };

    public:
        Span(unsigned int);
        Span(Span const &src);
        Span &operator=(Span const &rhs);
        virtual ~Span();
        void            addNumber(int);
        template<typename Iter>
        void            addNumber(Iter first, Iter last) {
            if ((last - first) + _v.size() > _n)
                throw SpanFullException();
            _v.insert(_v.end(), first, last);
        }
        unsigned int    shortestSpan() const;
        unsigned int    longestSpan() const;

};
std::ostream	&operator<<(std::ostream &output, Span const &rhs);

#endif