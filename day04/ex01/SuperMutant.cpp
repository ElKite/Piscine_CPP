// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:44:01 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 20:29:02 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	init();
	std::cout << "Gaaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & rhs)
{
	*this = rhs;
	std::cout << "Gaaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaaargh ..." << std::endl;
	return ;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
	this->_type = rhs.getType();
	this->_HP = rhs.getHP();
	return *this;
}

void SuperMutant::init()
{
	this->_HP = 170;
	this->_type = "Super Mutant";
}

void SuperMutant::takeDamage(int i)
{
	i -= 3;
	if (i > 0)
		this->_HP -= i;
	if (this->_HP < 0)
		_HP = 0;
}
