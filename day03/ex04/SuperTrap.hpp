// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 16:54:15 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 19:08:34 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public NinjaTrap, public FragTrap{
	
private :

public :

	SuperTrap();
	SuperTrap(SuperTrap const & src);
	SuperTrap(std::string name);
	~SuperTrap();

	SuperTrap & operator=(SuperTrap const & src);

	void Init();

};

#endif
