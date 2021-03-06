// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 12:14:36 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 14:13:41 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

private:

	Sorcerer();

	std::string title;
	std::string name;

public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer();

	Sorcerer & operator=(Sorcerer const & rhs);

	void polymorph(Victim const & src) const;

	std::string getTitle() const;
	std::string getName() const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
