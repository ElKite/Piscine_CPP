// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 16:54:15 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 16:58:54 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
	
private :

public :

	NinjaTrap();
	NinjaTrap(NinjaTrap const & src);
	NinjaTrap(std::string name);
	~NinjaTrap();

	NinjaTrap & operator=(NinjaTrap const & src);

	void ninjaShoebox(NinjaTrap const & src);
	void ninjaShoebox(ScavTrap const & src);
	void ninjaShoebox(FragTrap const & src);
	void ninjaShoebox(ClapTrap const & src);
	void Init();

};

#endif
