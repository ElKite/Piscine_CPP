// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:44:01 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 19:50:51 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: _name(name), _apCost(apcost), _dmg(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const & rhs)
{
	*this = rhs;
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
	this->_name = rhs.getName();
	this->_apCost = rhs.getAPCost();
	this->_dmg = rhs.getDamage();
	return *this;
}

std::string AWeapon::getName() const
{
	return this->_name;
}

int	AWeapon::getAPCost() const
{
	return this->_apCost;
}

int AWeapon::getDamage() const
{
	return this->_dmg;
}
