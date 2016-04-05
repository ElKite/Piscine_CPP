// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 15:11:45 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 15:24:51 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public :

	Zombie(std::string type);
	Zombie(std::string type, std::string name);
	~Zombie();

	void announce();

	std::string getType();
	std::string getName();
	void setName(std::string name);

private :

	std::string type;
	std::string name;

};

#endif
