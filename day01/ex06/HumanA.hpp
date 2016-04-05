// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 17:15:37 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 18:11:22 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

public :

	HumanA(std::string _name, Weapon & _weapon);
	~HumanA();

	void attack();

private :

	Weapon & weapon;
	std::string name;

};

#endif
