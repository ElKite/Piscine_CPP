// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 15:08:56 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 15:24:40 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(std::string type) 
{
	this->type = type;
}

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}

Zombie::~Zombie() {
}

void Zombie::announce() {
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiinnnnnsss ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

std::string Zombie::getType() {
	return this->type;
}

std::string Zombie::getName() {
	return this->name;
}
