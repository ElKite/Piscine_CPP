// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:13 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 14:27:56 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	this->name = "SC4V DEFAULT";
	Init();
	std::cout << name << " just got created with default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	Init();
	std::cout << name << " just got created with named constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	Init();
	std::cout << name << " just got created with copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destruction of " << name << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
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

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V <" << name << "> attacks <" << target << "> at range, causing <"
			  << rangedDmg << "> points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V <" << name << "> attacks <" << target << "> from melee, causing <"
			  << meleeDmg << "> points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "SC4V <" << name << "> took <" << amount << "> of damages !" << std::endl;
	amount -= armorDmgReduction;
	if (amount <= 0)
		amount = 0;
	hitPts -= amount;
	if (hitPts <= 0)
		hitPts = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V <" << name << "> retrieve <" << amount << "> from repairing !" << std::endl;
	hitPts += amount;
	if (hitPts >= maxHitPts)
		hitPts = maxHitPts;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	int i;
	std::string names [5];

	names[0] = std::string("Dance");
	names[1] = std::string("Jump");
	names[2] = std::string("Roll");
	names[3] = std::string("Fly");
	names[4] = std::string("Hide");
	energyPts -= 25;
	if (energyPts <= 0)
		std::cout << "Out of energy" << std::endl;
	else
	{
		i = rand() % 5;
		std::cout << "<" << name << "> used challengeNewcomer on <" <<
			target << "> and got the challenge <" << names[i] <<
			">" << std::endl;
	}
}

void ScavTrap::Init()
{
	this->hitPts = 100;
	this->maxHitPts = 100;
	this->energyPts = 50;
	this->maxEnergyPts = 50;
	this->level = 1;
	this->meleeDmg = 20;
	this->rangedDmg = 15;
	this->armorDmgReduction = 3;
}

/*Setters*/

void ScavTrap::setHitPts(int i)
{
	this->hitPts = i;
}

void ScavTrap::setMaxHitPts(int i)
{
	this->maxHitPts = i;
}

void ScavTrap::setEnergyPts(int i)
{
	this->energyPts = i;
}

void ScavTrap::setMaxEnergyPts(int i)
{
	this->maxEnergyPts = i;
}

void ScavTrap::setLevel(int i)
{
	this->level = i;
}

void ScavTrap::setMeleeDmg(int i)
{
	this->meleeDmg = i;
}

void ScavTrap::setRangedDmg(int i)
{
	this->rangedDmg = i;
}

void ScavTrap::setArmorDmgReduction(int i)
{
	this->armorDmgReduction = i;
}

/*Getters*/

int	ScavTrap::getHitPts() const
{
	return this->hitPts;
}

int ScavTrap::getMaxHitPts() const
{
	return this->maxHitPts;
}

int ScavTrap::getEnergyPts() const
{
	return this->energyPts;
}

int ScavTrap::getMaxEnergyPts() const
{
	return this->maxEnergyPts;
}

int ScavTrap::getLevel() const
{
	return this->level;
}

int ScavTrap::getMeleeDmg() const
{
	return this->meleeDmg;
}

int ScavTrap::getRangedDmg() const
{
	return this->rangedDmg;
}

int ScavTrap::getArmorDmgReduction() const
{
	return this->armorDmgReduction;
}

std::string ScavTrap::getName() const
{
	return this->name;
}
