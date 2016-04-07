// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:13 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 19:09:54 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# include "SuperTrap.hpp"

SuperTrap::SuperTrap() 
{
	this->name = "SUPER DEFAULT";
	Init();
	std::cout << name << " just got created with default constructor" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	this->name = name;
	Init();
	std::cout << name << " just got created with named constructor" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
	Init();
	std::cout << name << " just got created with copy constructor" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destruction of " << name << std::endl;
	return ;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & src)
{
	this->name = src.getName();
	this->hitPts = src.getHitPts();
	this->maxHitPts = src.getMaxHitPts();
	this->energyPts = src.getEnergyPts();
	this->maxEnergyPts = src.getMaxEnergyPts();
	this->level = src.getLevel();
	this->meleeDmg = src.getMeleeDmg();
	this->rangedDmg = src.getRangedDmg();
	this->armorDmgReduction = src.getArmorDmgReduction();
	
	return *this;
}

void SuperTrap::Init()
{
	this->hitPts = FragTrap::hitPts;
	this->maxHitPts = FragTrap::maxHitPts;
	this->energyPts = NinjaTrap::energyPts;
	this->maxEnergyPts = NinjaTrap::maxEnergyPts;
	this->level = 1;
	this->meleeDmg = NinjaTrap::meleeDmg;
	this->rangedDmg = FragTrap::rangedDmg;
	this->armorDmgReduction = FragTrap::armorDmgReduction;
}
