// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 12:14:29 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 14:51:29 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"

Peon::Peon()
{
	this->name = "DEFAULT_PEON";

	std::cout << "Zog zog" <<std::endl;
}

Peon::Peon(std::string name)
{
	this->name = name;

	std::cout << "Zog zog" <<std::endl;
}

Peon::Peon(Peon const & src)
{
	*this = src;

	std::cout << "Zog zog" <<std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon const & rhs)
{
	this->name = rhs.getName();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Peon const & rhs)
{
	o << "I am " << rhs.getName() << " and I like otters !";
	return o;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}
