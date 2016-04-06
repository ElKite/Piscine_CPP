// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/06 15:20:27 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/06 19:27:58 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed() {
	this->rawBits = 0;
}

Fixed::Fixed(Fixed const & rhs) {
	*this = rhs;
}

Fixed::Fixed(float const f) {
	this->rawBits = roundf(f * 256.0);
}

Fixed::Fixed(int const i) {
	this->rawBits = i * 256;
}

Fixed::~Fixed() {
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	this->rawBits = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const & rhs)
{
	if (rawBits > rhs.getRawBits())
		return true;
	else 
		return false;
}

bool Fixed::operator<(Fixed const & rhs)
{
	if (rawBits < rhs.getRawBits())
		return true;
	else 
		return false;
}

bool Fixed::operator>=(Fixed const & rhs)
{
	if (rawBits >= rhs.getRawBits())
		return true;
	else 
		return false;
}

bool Fixed::operator<=(Fixed const & rhs)
{
	if (rawBits <= rhs.getRawBits())
		return true;
	else 
		return false;
}

bool Fixed::operator==(Fixed const & rhs)
{
	if (rawBits == rhs.getRawBits())
		return true;
	else 
		return false;
}

bool Fixed::operator!=(Fixed const & rhs)
{
	if (rawBits != rhs.getRawBits())
		return true;
	else
		return false;
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed fixed;
	fixed.setRawBits(this->rawBits + rhs.getRawBits());
	return fixed;
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed fixed;
	fixed.setRawBits(this->rawBits - rhs.getRawBits());
	return fixed;
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed fixed;
	fixed.setRawBits((this->rawBits * rhs.getRawBits()) / 256);
	return fixed;
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed fixed;
	fixed.setRawBits(this->rawBits / rhs.getRawBits());
	return fixed;
}

Fixed & Fixed::operator++() {
	this->rawBits++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return tmp;
	
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

Fixed & Fixed::min(Fixed & a, Fixed & b) 
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b) 
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b) 
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b) 
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}


std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
