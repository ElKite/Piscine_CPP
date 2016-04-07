// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:13 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 15:17:26 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	this->name = "CL4P-TP DEFAULT";
	Init();
	std::cout << name << " just got created with default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	Init();
	std::cout << name << " just got created with named constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	Init();
	std::cout << name << " just got created with copy constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destruction of ClapTrap " << name << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
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

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P-TP <" << name << "> attacks <" << target << "> at range, causing <"
			  << rangedDmg << "> points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P-TP <" << name << "> attacks <" << target << "> from melee, causing <"
			  << meleeDmg << "> points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "CL4P-TP <" << name << "> took <" << amount << "> of damages !" << std::endl;
	amount -= armorDmgReduction;
	if (amount <= 0)
		amount = 0;
	hitPts -= amount;
	if (hitPts <= 0)
		hitPts = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "CL4P-TP <" << name << "> retrieve <" << amount << "> from repairing !" << std::endl;
	hitPts += amount;
	if (hitPts >= maxHitPts)
		hitPts = maxHitPts;
}

void ClapTrap::Init()
{
	this->hitPts = 100;
	this->maxHitPts = 100;
	this->energyPts = 100;
	this->maxEnergyPts = 100;
	this->level = 1;
	this->meleeDmg = 30;
	this->rangedDmg = 20;
	this->armorDmgReduction = 5;
}

/*Setters*/

void ClapTrap::setHitPts(int i)
{
	this->hitPts = i;
}

void ClapTrap::setMaxHitPts(int i)
{
	this->maxHitPts = i;
}

void ClapTrap::setEnergyPts(int i)
{
	this->energyPts = i;
}

void ClapTrap::setMaxEnergyPts(int i)
{
	this->maxEnergyPts = i;
}

void ClapTrap::setLevel(int i)
{
	this->level = i;
}

void ClapTrap::setMeleeDmg(int i)
{
	this->meleeDmg = i;
}

void ClapTrap::setRangedDmg(int i)
{
	this->rangedDmg = i;
}

void ClapTrap::setArmorDmgReduction(int i)
{
	this->armorDmgReduction = i;
}

/*Getters*/

int	ClapTrap::getHitPts() const
{
	return this->hitPts;
}

int ClapTrap::getMaxHitPts() const
{
	return this->maxHitPts;
}

int ClapTrap::getEnergyPts() const
{
	return this->energyPts;
}

int ClapTrap::getMaxEnergyPts() const
{
	return this->maxEnergyPts;
}

int ClapTrap::getLevel() const
{
	return this->level;
}

int ClapTrap::getMeleeDmg() const
{
	return this->meleeDmg;
}

int ClapTrap::getRangedDmg() const
{
	return this->rangedDmg;
}

int ClapTrap::getArmorDmgReduction() const
{
	return this->armorDmgReduction;
}

std::string ClapTrap::getName() const
{
	return this->name;
}
