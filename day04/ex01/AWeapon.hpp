// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:27:52 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 18:31:12 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {

	

	protected:

	std::string _name;
	int _apCost;
	int _dmg;

	public:

	AWeapon();
	AWeapon(AWeapon const & rhs);
	AWeapon(std::string const & name, int apcost, int damage);
	~AWeapon();

	AWeapon & operator=(AWeapon const & rhs);
	
	std::string getName() const;
	int			getAPCost() const;
	int			getDamage() const;
	
	virtual void attack() const = 0;

};

#endif
