// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 17:07:50 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 17:13:36 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon() {
}

void Weapon::setType(std::string type) {
	this->type = type;
}

std::string & Weapon::getType() {
	return this->type;
}
