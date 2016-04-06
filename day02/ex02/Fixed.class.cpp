// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/06 15:20:27 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/06 18:15:33 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed() {
	
	std::cout << "Default constructor called" << std::endl;

	this->rawBits = 0;
}

Fixed::Fixed(Fixed const & rhs) {

	std::cout << "Copy constructor called" << std::endl;

	*this = rhs;
}

Fixed::Fixed(float const f) {

	std::cout << "Float contructor called" << std::endl;

	this->rawBits = roundf(f * 256.0);
}

Fixed::Fixed(int const i) {

	std::cout << "Int contructor called" << std::endl;

	this->rawBits = i * 256;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;

	this->rawBits = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

float	Fixed::toFloat() const {
	return this->rawBits / 256.0;
}

int Fixed::toInt() const {
	return this->rawBits / 256;
}

int Fixed::getRawBits() const {
	return this->rawBits;
}

void Fixed::setRawBits(int const raw) {
	this->rawBits = raw;
}
