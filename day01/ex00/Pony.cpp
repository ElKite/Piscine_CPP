// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 14:38:46 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 14:46:13 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age) {
	this->name = name;
	this->color = color;
	this->age = age;
}

Pony::~Pony() {
}

std::string Pony::getName() {
	return this->name;
}

std::string Pony::getColor() {
	return this->color;
}

int Pony::getAge() {
	return this->age;
}
