// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:44:01 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 20:26:53 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PowerFist.hpp"

PowerFist::PowerFist()
{
	this->_name = "Power First";
	this->_dmg = 50;
	this->_apCost = 8;
	return ;
}

PowerFist::PowerFist(PowerFist const & rhs)
{
	*this = rhs;
	return ;
}

PowerFist::~PowerFist()
{
	return ;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	this->_name = rhs.getName();
	this->_apCost = rhs.getAPCost();
	this->_dmg = rhs.getDamage();
	return *this;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

