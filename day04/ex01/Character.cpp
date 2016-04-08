// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 18:35:04 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 20:41:23 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character()
{
	init();
	return ;
}

Character::Character(std::string const & name) : _name(name)
{
	init();
	return ;
}

Character::Character(Character const & rhs)
{
	*this = rhs;
	return ;
}

Character::~Character()
{
}

void Character::init()
{
	this->_ap = 40;
	this->_w = NULL;
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	this->_ap = rhs.getAP();
	this->_w = rhs.getWeapon();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.getWeapon() != NULL)
		o << rhs.getName() << " has " << rhs.getAP() << " and wields a " << rhs.getWeapon()->getName()
		  << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " and is unarmed" << std::endl;
	return o;
}

void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon * weapon)
{
	this->_w = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->_w != NULL) {
		std::cout << this->_name << " attacks " << enemy->getType() << " with a "
				  << this->_w->getName() << std::endl;
		this->_w->attack();
		enemy->takeDamage(this->_w->getDamage());
		if (enemy->getHP() <= 0)
			enemy->~Enemy();
		this->_ap -= this->_w->getAPCost();
		if (this->_ap < 0)
			this->_ap = 0;
	}
}

std::string Character::getName() const {
	return this->_name;
}

int	Character::getAP() const {
	return this->_ap;
}

AWeapon * Character::getWeapon() const {
	return this->_w;
}


