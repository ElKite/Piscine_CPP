// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:27:52 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 18:30:37 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
	
	void init();

	public:

	RadScorpion();
	RadScorpion(RadScorpion const & rhs);
	~RadScorpion();

	RadScorpion & operator=(RadScorpion const & rhs);
		
	virtual void takeDamage(int);

};

#endif
