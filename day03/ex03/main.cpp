// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 13:51:46 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 18:01:02 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap bot;
	FragTrap * jean = new FragTrap("Jean");
	
	bot.meleeAttack(jean->getName());
	jean->takeDamage(bot.getMeleeDmg());

	jean->rangedAttack(bot.getName());
	bot.takeDamage(jean->getRangedDmg());

	bot.beRepaired(20);
	
	FragTrap * jeanbis = new FragTrap(*jean);

	jean->meleeAttack(jeanbis->getName());
	jeanbis->takeDamage(jean->getMeleeDmg());

	jeanbis->vaulthunter_dot_exe(bot.getName());

	delete jean;
	delete jeanbis;

	ScavTrap botbot;
	ScavTrap * ddenis = new ScavTrap("Denis");

	botbot.meleeAttack(ddenis->getName());
	ddenis->takeDamage(ddenis->getMeleeDmg());

	ddenis->challengeNewcomer(botbot.getName());

	ClapTrap toto;
	toto.meleeAttack("the void");

	std::cout << " NINJA TRAP " << std::endl;

	NinjaTrap ninja;
	NinjaTrap *munja = new NinjaTrap("JCVD");
	ScavTrap *scav = new ScavTrap("SCAV");
	FragTrap *frag = new FragTrap("FRAG");

	ninja.ninjaShoebox(*munja);
	ninja.ninjaShoebox(*scav);
	ninja.ninjaShoebox(*frag);
	ninja.ninjaShoebox(toto);

	delete munja;
	delete scav;
	delete frag;
	
}
