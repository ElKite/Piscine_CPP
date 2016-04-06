// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 18:58:55 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/06 12:36:00 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <ostream>

int main(int count, char **args)
{
	if (count != 4)
		std::cout << "You need one filename and two arguments" << std::endl;
	else 
	{
		std::string fileName = args[1];
		std::string s1 = args[2];
		std::string s2 = args[3];

		if (fileName.length() == 0 || s2.length() == 0 || s2.length() == 0)
			std::cout << "Your arguments cannot be empty" << std::endl;
		else 
		{
			std::ifstream readFile;
			std::ofstream writeFile;

			readFile.open(fileName);
			writeFile.open(fileName + ".replace");

			std::string line;
			size_t len = s1.length();

			while (std::getline(readFile, line))
			{
				while (true) 
				{
					size_t pos = line.find(s1);
					if (pos != std::string::npos)
						line.replace(pos, len, s2);
					else
						break ;
				}
				writeFile << line << std::endl;
			}
			readFile.close();
			writeFile.close();	
		}
	}
	return (0);
}
