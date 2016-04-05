
// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 15:56:31 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 16:18:56 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int i)
{
	zombies = new Zombie[i];
	N = i;
	randomName();
}

ZombieHorde::~ZombieHorde() {
	delete [] zombies;
}

void ZombieHorde::randomName() {

	std::srand(time(0));

	for (int i = 0; i < N; i++) {
		int j =  rand() % 10 + 1;
		if (j == 1)
			zombies[i].setName("Bob");
		else if (j == 2)
			zombies[i].setName("James");
		else if (j == 3)
			zombies[i].setName("Georges");
		else if (j == 4)
			zombies[i].setName("Charlotte");
		else if (j == 5)
			zombies[i].setName("Frederic");
		else if (j == 6)
			zombies[i].setName("Brenda");
		else if (j == 7)
			zombies[i].setName("Thibault");
		else if (j == 8)
			zombies[i].setName("Francoise");
		else if (j == 9)
			zombies[i].setName("Anne");
		else
			zombies[i].setName("Romane");
		zombies[i].setType("Horde");
	}

}

void ZombieHorde::announce() {
	for (int i = 0; i < N; i++)
		zombies[i].announce();
}
