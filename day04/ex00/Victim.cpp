// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 12:14:29 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 14:26:10 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

Victim::Victim()
{
	this->name = "DEFAULT_VICTIM";

	std::cout << "Some random victim called "<<  this->name << " just popped !" << std::endl;
}

Victim::Victim(std::string name)
{
	this->name = name;

	std::cout << "Some random victim called "<<  this->name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;

	std::cout << "Some random victim called "<<  this->name << " just popped !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name
			  << " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs)
{
	this->name = rhs.getName();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I am " << rhs.getName() << " and I like otters !";
	return o;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName() const
{
	return this->name;
}
