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

#include <iostream>
#include <cstdlib>

struct Data {
	std::string	str;
};

uintptr_t	serialize(Data* ptr) {
	// return ptr in an uintptr_t type
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {
	// back to original data
	return reinterpret_cast<Data *>(raw);
}

int main() {
	Data	data;
	Data	*newData;
	// uintptr_t == unsigned integer type that is capable of storing a data pointer
	uintptr_t   raw;
	data.str = "hello test";
	raw = serialize(&data);
	newData = deserialize(raw);
	std::cout << "data before ======> " << &data << std::endl;
	std::cout << "same data after ==> " << newData << std::endl;
	return 0;
}
