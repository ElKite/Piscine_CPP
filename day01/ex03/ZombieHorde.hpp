// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 15:54:25 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 16:17:53 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {

public :

	ZombieHorde(int n);
	~ZombieHorde();

	void	announce();
	void	randomName();

private :
	Zombie *zombies;
	int N;
};
#endif
