// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 12:14:29 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 16:03:35 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;

	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;

	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title 
			  << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	this->name = rhs.getName();
	this->title = rhs.getTitle();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;;
	return o;
}

void	Sorcerer::polymorph(Victim const & src) const
{
	src.getPolymorphed();
}

std::string Sorcerer::getName() const
{
	return this->name;
}

std::string Sorcerer::getTitle() const
{
	return this->title;
}
