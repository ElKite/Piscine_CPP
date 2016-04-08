// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:44:01 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 20:24:33 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	this->_name = "Plasma Rifle";
	this->_dmg = 21;
	this->_apCost = 5;
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & rhs)
{
	*this = rhs;
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	this->_name = rhs.getName();
	this->_apCost = rhs.getAPCost();
	this->_dmg = rhs.getDamage();
	return *this;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
