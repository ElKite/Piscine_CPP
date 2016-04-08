// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:44:01 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 20:41:52 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"

Enemy::Enemy()
{
	return ;
}

Enemy::Enemy(Enemy const & rhs)
{
	*this = rhs;
	return ;
}

Enemy::~Enemy()
{
	return ;
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	this->_type = rhs.getType();
	this->_HP = rhs.getHP();
	return *this;
}

void Enemy::takeDamage(int i)
{
	this->_HP -= i;
	if (this->_HP < 0)
		_HP = 0;
}

std::string Enemy::getType() const
{
	return this->_type;
}

int	Enemy::getHP() const
{
	return this->_HP;
}
