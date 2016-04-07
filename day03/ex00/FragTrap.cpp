// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:13 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 12:39:18 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	this->name = "FR4G-TP DEFAULT";
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
}

FragTrap::FragTrap(FragTrap const & src)
{
	this->name = src.getName();
	this->hitPts = src.getHitsPts();
	this->maxHitPts = src.getMaxHitsPts();
	this->energyPts = src.getEnergyPts();
	this->maxEnergyPts = src.getMaxEnergyPts();
	this->level = src.getLevel();
	this->meleeDmg = src.getMeleeDmg();
	this->rangedDmg = src.getRangedDmg();
	this->armorDmgReduction = src.getArmorDmgReduction();
}

FragTrap::~FragTrap()
{
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	this->name = src.getName();
	this->hitPts = src.getHitsPts();
	this->maxHitPts = src.getMaxHitsPts();
	this->energyPts = src.getEnergyPts();
	this->maxEnergyPts = src.getMaxEnergyPts();
	this->level = src.getLevel();
	this->meleeDmg = src.getMeleeDmg();
	this->rangedDmg = src.getRangedDmg();
	this->armorDmgReduction = src.getArmorDmgReduction();
}

void FragTrap::rangedAttack(std::string const & target)
{
}

void FragTrap::meleeAttack(std::string const & target)
{
}

void FragTrap::takeDamage(unsigned int amount)
{
}

void FragTrap::beRepaired(unsigned int amount)
{
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
}

/*Setters*/

void FragTrap::setHitPtS(int i)
{
	this->hitPts = i;
}

void FragTrap::setMaxHitPts(int i)
{
	this->maxHitPts = i;
}

void FragTrap::setEnergy(int i)
{
	this->energyPts = i;
}

void FragTrap::setMaxEnergy(int i)
{
	this->maxEnergyPts = i;
}

void FragTrap::setLevel(int i)
{
	this->level = i;
}

void FragTrap::setMeleeDmg(int i)
{
	this->meleeDmg = i;
}

void FragTrap::setRangedDmg(int i)
{
	this->rangedDmg = i;
}

void FragTrap::setArmorDmgReduction(int i)
{
	this->armorDmgReduction = i;
}

/*Getters*/

int	FragTrap::getHitPts()
{
	return this->hitPts;
}

int FragTrap::getMaxHitPts()
{
	return this->maxHitPts;
}

int FragTrap::getEnergyPts()
{
	return this->energyPts;
}

int FragTrap::getMaxEnergyPts()
{
	return this->maxEnergyPts;
}

int FragTrap::getLevel()
{}
