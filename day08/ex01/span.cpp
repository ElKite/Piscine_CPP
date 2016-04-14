// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/14 16:18:18 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/14 16:18:19 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Span.hpp"
#include <algorithm>
#include <iostream>

Span::Span()
{

}
Span::Span(int i) : _list(i)
{
	_count = 0;
	_len = i;
}
Span::Span(Span const & src)
{
	*this = src;
}

Span::~Span()
{

}

Span &Span::operator=(Span const & src)
{
	this->_list = src.getList();
	this->_count = src.getCount();
	this->_len = src.getLen();
	return *this;
}

void Span::addNumber(int i)
{
	if (_count == _len)
		throw std::string("List is full");
	else
	{
		this->_list.push_back(i);
		_count++;
	}
}

int Span::shortestSpan()
{
	if (_count <= 1)
		throw std::string("Nothing to compare");
	std::sort(this->_list.begin(),this->_list.end());
	std::cout << this->_list[0] << std::endl;
	std::cout << this->_list[1] << std::endl;
	return (this->_list[1] - this->_list[0]);
}

int Span::longestSpan()
{
	if (_count <= 1)
		throw std::string("Nothing to compare");
	std::sort(this->_list.begin(), this->_list.end());

	//std::cout << this->_list.begin() << std::endl;
	//std::cout << this->_list.end() << std::endl;
	return (this->_list.end() - this->_list.begin());
}

std::vector<int> Span::getList() const
{
	return _list;
}

int			Span::getCount() const
{
	return _count;
}

int 		Span::getLen() const
{
	return _len;
}