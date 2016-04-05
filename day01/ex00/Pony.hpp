// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 14:38:38 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 14:46:33 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {

public :

	Pony(std::string name, std::string color, int age);
	~Pony();
	
	std::string getName();
	std::string getColor();
	int getAge();

private :
	
	std::string name;
	std::string color;
	int	age;

};

#endif
