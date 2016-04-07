// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 13:51:46 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 19:01:55 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap super("DIDIER");
	NinjaTrap *ninja = new NinjaTrap("NIINJAAA");
	FragTrap *frag = new FragTrap("TOTO");

	super.ninjaShoebox(*ninja);
	super.vaulthunter_dot_exe(ninja->getName());

	std::cout << "TOTO HP " << frag->getHitPts() << std::endl;
	std::cout << "NINJA HP " << ninja->getHitPts() << std::endl;

	std::cout << "DIDIER HP = " << super.getHitPts() << std::endl;
	std::cout << "DIDIER energy = " << super.getEnergyPts() << std::endl;
	std::cout << "DIDIER armorres = " << super.getArmorDmgReduction() << std::endl;

	delete ninja;
}
