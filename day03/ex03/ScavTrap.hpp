// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 14:22:52 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 16:24:20 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:

	ScavTrap();
	ScavTrap(ScavTrap const & src);
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & src);

	void challengeNewcomer(std::string const & target);
	void	Init();
};

#endif
