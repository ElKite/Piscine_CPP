// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 17:22:21 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 18:52:23 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {

public :

	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon& weapon);

private :

	Weapon * weapon;
	std::string name;

};

#endif
