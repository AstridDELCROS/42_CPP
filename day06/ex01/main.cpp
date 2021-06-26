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

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void	*serialize(void)
{
	std::string	elementsToPick("abcdefghijklmnopqrstuvwxyz123456789");
	char *raw = new char[sizeof(std::string) * 2 + sizeof(int)];
	std::string	s1;
	int			n;
	std::string	s2;
	
	srand(time(NULL));
	for (int i = 0; i < 8; i++)
	{
	    s1 += elementsToPick[rand() % elementsToPick.length() - 1];
	    s2 += elementsToPick[rand() % elementsToPick.length() - 1];
	}
	n = rand();	
	*reinterpret_cast<std::string *>(raw) = s1;
	*reinterpret_cast<int *>(raw + sizeof(std::string)) = n;
	*reinterpret_cast<std::string *>(raw + sizeof(std::string) + sizeof(int)) = s2;
    std::cout << raw << n << s2 << std::endl;
	return reinterpret_cast<void *>(raw);
}

Data	*deserialize(void *raw)
{
    Data	*deserialized = new Data;
	char    *data = reinterpret_cast<char *>(raw);
	deserialized->s1 = *reinterpret_cast<std::string *>(data);
	deserialized->n = *reinterpret_cast<int *>(data + sizeof(std::string));
	deserialized->s2 = *reinterpret_cast<std::string *>(data + sizeof(std::string) + sizeof(int));
	std::cout << "s1 => " << deserialized->s1 << std::endl;
	std::cout << "n  => " << deserialized->n << std::endl;
	std::cout << "s2 => " << deserialized->s2 << std::endl;
	delete (reinterpret_cast<std::string *>(raw));
    return (deserialized);
}

int	main(void)
{
	void    *raw = serialize();
	deserialize(raw);
	return 0;
}