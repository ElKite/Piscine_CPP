// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 15:05:47 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 15:07:23 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void	memoryLeak()
{
	std::string *panthere = new std::string("String panther");

	std::cout << *panthere << std::endl;
	delete panthere;
}
