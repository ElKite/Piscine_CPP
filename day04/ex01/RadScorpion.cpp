// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:44:01 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 20:28:42 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	init();
	std::cout << "click click click" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const & rhs)
{
	*this = rhs;
	std::cout << "click click click" << std::endl;
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout << "SPROTCH" << std::endl;
	return ;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs)
{
	this->_type = rhs.getType();
	this->_HP = rhs.getHP();
	return *this;
}

void RadScorpion::init()
{
	this->_HP = 80;
	this->_type = "RadScorpion";
}

void RadScorpion::takeDamage(int i)
{
	this->_HP -= i;
	if (this->_HP < 0)
		_HP = 0;
}

