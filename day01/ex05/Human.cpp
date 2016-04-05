// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 16:46:11 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 16:54:43 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human() {
}

Human::~Human() {
}

std::string Human::identify() {
	return brain.identify();
}

Brain & Human::getBrain() {
	return brain;
}
