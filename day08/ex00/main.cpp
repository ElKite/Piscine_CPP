// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/14 12:55:42 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/14 12:55:44 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <list>
#include "easyfind.hpp"
int main()
{
	std::list<int> list;
	list.push_back(10);
	list.push_back(56);
	list.push_back(22);


	if (easyfind(list, 24))
		std::cout << "Value found" << std::endl;
	else
		std::cout << "Value not found" << std::endl;
}