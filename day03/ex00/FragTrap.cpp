// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:13 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 14:16:19 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	this->name = "FR4G-TP DEFAULT";
	Init();
	std::cout << name << " just got created with default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	Init();
	std::cout << name << " just got created with named constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	Init();
	std::cout << name << " just got created with copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destruction of " << name << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
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

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at range, causing <"
			  << rangedDmg << "> points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> from melee, causing <"
			  << meleeDmg << "> points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP <" << name << "> took <" << amount << "> of damages !" << std::endl;
	amount -= armorDmgReduction;
	if (amount <= 0)
		amount = 0;
	hitPts -= amount;
	if (hitPts <= 0)
		hitPts = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP <" << name << "> retrieve <" << amount << "> from repairing !" << std::endl;
	hitPts += amount;
	if (hitPts >= maxHitPts)
		hitPts = maxHitPts;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int i;
	std::string names [5];

	names[0] = std::string("Dashing Strike");
	names[1] = std::string("Multishot");
	names[2] = std::string("Nuts Breaker");
	names[3] = std::string("Head Bash");
	names[4] = std::string("Thunder");
	energyPts -= 25;
	if (energyPts <= 0)
		std::cout << "Out of energy" << std::endl;
	else
	{
		i = rand() % 5;
		std::cout << "<" <<name << "> used vaulthunter dox exe on <" <<
			target << "> and got the attack <" << names[i] <<
			"> which failed ....." << std::endl;
	}
}

void FragTrap::Init()
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

void FragTrap::setHitPts(int i)
{
	this->hitPts = i;
}

void FragTrap::setMaxHitPts(int i)
{
	this->maxHitPts = i;
}

void FragTrap::setEnergyPts(int i)
{
	this->energyPts = i;
}

void FragTrap::setMaxEnergyPts(int i)
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

int	FragTrap::getHitPts() const
{
	return this->hitPts;
}

int FragTrap::getMaxHitPts() const
{
	return this->maxHitPts;
}

int FragTrap::getEnergyPts() const
{
	return this->energyPts;
}

int FragTrap::getMaxEnergyPts() const
{
	return this->maxEnergyPts;
}

int FragTrap::getLevel() const
{
	return this->level;
}

int FragTrap::getMeleeDmg() const
{
	return this->meleeDmg;
}

int FragTrap::getRangedDmg() const
{
	return this->rangedDmg;
}

int FragTrap::getArmorDmgReduction() const
{
	return this->armorDmgReduction;
}

std::string FragTrap::getName() const
{
	return this->name;
}
