// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 12:14:36 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 14:11:56 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {

protected:

	Victim();

	std::string name;

public:

	Victim(std::string name);
	Victim(Victim const & src);
	~Victim();

	Victim & operator=(Victim const & rhs);

	virtual void getPolymorphed() const;

	std::string getName() const;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
