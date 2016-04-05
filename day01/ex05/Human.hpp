// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 16:46:01 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 16:53:13 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human {

public :

	Human();
	~Human();
	
	std::string identify();
	Brain & getBrain();

private :
	Brain brain;
};

#endif
