// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 17:00:29 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 20:20:03 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public :

	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & rhs);
	~PlasmaRifle();

	PlasmaRifle & operator=(PlasmaRifle const & rhs);
	
	virtual void attack() const;

};

#endif
