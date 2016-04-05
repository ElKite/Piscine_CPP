// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 17:15:34 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 18:13:28 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon & _weapon) : name(_name), weapon(_weapon)
{
}

HumanA::~HumanA() 
{
}

void	HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
