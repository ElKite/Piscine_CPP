// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 13:51:46 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 14:51:33 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
}
