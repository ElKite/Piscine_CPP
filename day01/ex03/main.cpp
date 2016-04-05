// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 16:06:55 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 16:08:58 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

int main() {

	ZombieHorde *horde = new ZombieHorde(5);
	horde->announce();
	delete horde;
	return (0);
}
