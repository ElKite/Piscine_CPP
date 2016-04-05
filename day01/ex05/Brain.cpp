// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 16:43:49 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 16:57:53 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain() {
}

Brain::~Brain() {
}

std::string Brain::identify() {
	std::stringstream ss;
	std::string s;

	ss << this;
	ss >> s;
	
	return s;
}
