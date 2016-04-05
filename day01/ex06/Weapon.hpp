// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 17:07:41 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 17:26:16 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

public :

	Weapon(std::string s);
	~Weapon();

	std::string & getType();
	void	setType(std::string type);

private :

	std::string type;

};

#endif
