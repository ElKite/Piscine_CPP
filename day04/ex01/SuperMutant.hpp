// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:27:52 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 18:21:55 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
	
	void init();

	public:

	SuperMutant();
	SuperMutant(SuperMutant const & rhs);
	~SuperMutant();

	SuperMutant & operator=(SuperMutant const & rhs);
		
	virtual void takeDamage(int);

};

#endif
