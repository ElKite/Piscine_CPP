// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:13 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 18:03:53 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() 
{
	this->name = "NINJ4-TP DEFAULT";
	Init();
	std::cout << name << " just got created with default constructor" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->name = name;
	Init();
	std::cout << name << " just got created with named constructor" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
	Init();
	std::cout << name << " just got created with copy constructor" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destruction of " << name << std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
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

void NinjaTrap::ninjaShoebox(NinjaTrap const & src)
{
	std::cout << "Damn Ninja, take this !" << std::endl;
	rangedAttack(src.getName());
}

void NinjaTrap::ninjaShoebox(ClapTrap const & src)
{
	std::cout << "Damn Clap, take this !" << std::endl;
	meleeAttack(src.getName());
}

void NinjaTrap::ninjaShoebox(FragTrap const & src)
{
	std::cout << "Damn Frag, take this !" << std::endl;
	rangedAttack(src.getName());
}

void NinjaTrap::ninjaShoebox(ScavTrap const & src)
{
	std::cout << "Damn Scav, take this !" << std::endl;
	meleeAttack(src.getName());
}

void NinjaTrap::Init()
{
	this->hitPts = 60;
	this->maxHitPts = 60;
	this->energyPts = 120;
	this->maxEnergyPts = 120;
	this->level = 1;
	this->meleeDmg = 60;
	this->rangedDmg = 5;
	this->armorDmgReduction = 0;
}
