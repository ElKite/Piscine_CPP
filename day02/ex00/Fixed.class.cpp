// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/06 15:20:27 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/06 15:54:44 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed() {
	
	this->rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & rhs) {
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}



Fixed & Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;

	this->rawBits = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member called" << std::endl;
	return this->rawBits;
}

void Fixed::setRawBits(int const raw) {
	this->rawBits = raw;
}
