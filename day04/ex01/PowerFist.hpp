// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 17:00:29 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 20:26:25 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public :

	PowerFist();
	PowerFist(PowerFist const & rhs);
	~PowerFist();

	PowerFist & operator=(PowerFist const & rhs);
	
	virtual void attack() const;

};

#endif
