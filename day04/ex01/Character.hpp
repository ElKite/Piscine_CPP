// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 18:31:29 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 19:51:20 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

	std::string _name;
	int _ap;
	AWeapon * _w;

	void init();

	public :

	Character();
	Character(Character const & rhs);
	Character(std::string const & name);
	~Character();

	Character & operator=(Character const & rhs);

	void recoverAP();
	void equip(AWeapon* weap);
	void attack(Enemy* enemy);

	std::string getName() const;
	int	getAP() const;
	AWeapon * getWeapon() const;

};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif
