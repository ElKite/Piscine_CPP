// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:00 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 18:11:58 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{

private:

public:

	FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap(std::string name);
	~FragTrap();

	FragTrap & operator=(FragTrap const & src);

	void vaulthunter_dot_exe(std::string const & target);
	void Init();
};

#endif
