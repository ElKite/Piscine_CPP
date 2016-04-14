// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/14 16:18:26 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/14 16:18:27 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
#define SPAN_HPP


#include <iostream>
#include <vector>

class Span {

	std::vector<int> _list;
	int				_count;
	int				_len;
	Span();

public:

	Span(int i);
	Span(Span const & src);
	~Span();

	Span &operator=(Span const & src);

	void addNumber(int i);
	int shortestSpan();
	int longestSpan();

	std::vector<int> 	getList() const;
	int				getCount() const;
	int				getLen() const;

};

#endif