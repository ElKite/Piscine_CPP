// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/06 14:16:01 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/06 15:49:46 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

class Fixed {

public:

	Fixed();
	Fixed(Fixed const & src);
	~Fixed();


	Fixed & operator=(Fixed const & rhs);

	int getRawBits() const;
	void setRawBits(int const raw);

private:

	int rawBits;
	static const int f = 8;

};

#endif 
