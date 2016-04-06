// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/06 14:16:01 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/06 18:10:22 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <tgmath.h>

class Fixed {

public:

	Fixed();
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed & operator=(Fixed const & rhs);

	float toFloat(void) const;
	int	toInt(void) const;

	int getRawBits() const;
	void setRawBits(int const raw);

private:

	int rawBits;
	static const int f = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif 
