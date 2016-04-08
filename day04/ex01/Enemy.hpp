// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/08 16:27:52 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/08 20:41:15 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {

	protected:

	std::string _type;
	int _HP;

	public:

	Enemy();
	Enemy(Enemy const & rhs);
	virtual ~Enemy();

	Enemy & operator=(Enemy const & rhs);
	
	std::string getType() const;
	int			getHP() const;
	
	virtual void takeDamage(int);

};

#endif
