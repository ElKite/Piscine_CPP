// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 17:22:13 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 18:52:16 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB() 
{
}

void	HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}


