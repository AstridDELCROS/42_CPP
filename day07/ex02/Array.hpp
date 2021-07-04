/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class   Array {
    private:
        T       *_array;
        unsigned int     _size;

    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);
        Array   &operator=(Array const &rhs);
        T       &operator[](unsigned int i);
        T const &operator[](unsigned int i) const;
        unsigned int     size() const;
        virtual ~Array();
};
template< typename T>
std::ostream    &operator<<(std::ostream &output, Array<T> const &rhs);

template<typename T>
Array<T>::Array() {
    this->_size = 0;
    this->_array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n) {
    this->_size = n;
    this->_array = new T[n];
}

template< typename T >
Array<T>::Array(Array<T> const &src) {
    this->_size = src._size;
    this->_array = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        this->_array[i] = src._array[i];
}

template< typename T >
Array<T>::~Array() {
    delete[] this->_array;
}

template< typename T >
unsigned int Array<T>::size() const {
    return this->_size;
}

template< typename T >
Array<T>    &Array<T>::operator=(Array<T> const &rhs) {
    if (this->_array)
        delete[] this->_array;
    this->_size = rhs._size;
    this->_array = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        this->_array[i] = rhs._array[i];
    return *this;
}

template<typename T>
T   &Array<T>::operator[](unsigned int i) {
    if (i >= this->_size)
        throw std::out_of_range("index is out of range");
    return this->_array[i];
}

template<typename T>
T   const &Array<T>::operator[](unsigned int i) const {
    if (i >= this->_size)
        throw std::out_of_range("index is out of range");
    return this->_array[i];
}

template< typename T>
std::ostream    &operator<<(std::ostream &output, Array<T> const &rhs) {
    for (unsigned int i = 0; i < rhs.size(); i++)
		output << "Array [" << i << "]: " << rhs[i] << std::endl;
	return output;
}

#endif