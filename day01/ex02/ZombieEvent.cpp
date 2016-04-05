// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 15:30:29 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 15:49:23 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	this->type = "defaultType";
}

ZombieEvent::~ZombieEvent() {
}

void ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie * ZombieEvent::newZombie(std::string name) {
	Zombie * zombie = new Zombie(this->type, name);
	return zombie;
}

void	ZombieEvent::randomChump() {
	int i;
	std::string s;

	std::srand(time(0));
	i = rand() % 10 + 1;
	if (i == 1)
		s = "Bob";
	else if (i == 2)
		s = "James";
	else if (i == 3)
		s = "Georges";
	else if (i == 4)
		s = "Charlotte";
	else if (i == 5)
		s = "Frederic";
	else if (i == 6)
		s = "Brenda";
	else if (i == 7)
		s = "Thibault";
	else if (i == 8)
		s = "Francoise";
	else if (i == 9)
		s = "Anne";
	else 
		s = "Romane";
	
	Zombie *zombie = new Zombie(this->type, s);
	zombie->announce();
	delete zombie;
}
