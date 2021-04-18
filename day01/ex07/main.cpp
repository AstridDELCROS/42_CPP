/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/02 03:30:31 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int	main (int argc, char **argv)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string line;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	size_t len_s1 = s1.length();
	size_t len_s2 = s2.length();
	size_t pos = 0;
	infile.open(filename);
	outfile.open(filename + ".replace");
	while (std::getline(infile, line))
	{
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.replace(pos, len_s1, s2);
			pos += len_s2;
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}
