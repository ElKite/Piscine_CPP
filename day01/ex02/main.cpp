// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 15:41:32 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 15:49:54 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
	
	Zombie *myZombie = new Zombie("Runner", "Joe");
	myZombie->announce();
	delete myZombie;

	ZombieEvent *zombieEvent = new ZombieEvent();
	Zombie *jean = zombieEvent->newZombie("Jean");
	jean->announce();
	delete jean;

	zombieEvent->setZombieType("Gunner");
	Zombie *kev = zombieEvent->newZombie("Kev");
	kev->announce();
	delete kev;

	zombieEvent->randomChump();
	delete zombieEvent;
	return (0);
}
