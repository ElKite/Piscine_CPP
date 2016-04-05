// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 15:25:43 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 15:30:22 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {

public :

	ZombieEvent();
	~ZombieEvent();

	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	void randomChump();

private :
	std::string type;
};

#endif
