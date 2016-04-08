// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 12:14:36 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 14:09:32 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {

private:

	Peon();

public:

	Peon(std::string name);
	Peon(Peon const & src);
	~Peon();

	Peon & operator=(Peon const & rhs);

	virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & o, Peon const & rhs);

#endif
