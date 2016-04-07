// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:13 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 16:23:29 by vtarreau         ###   ########.fr       //
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
