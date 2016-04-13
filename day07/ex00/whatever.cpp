// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/13 13:52:18 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/13 13:53:20 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <typename T>
void swap(T & a, T & b)
{
	T c;

	c = a;
	a = b;
	b = c;

}

template<typename T>
T min(T a, T b)
{
	if (a == b)
		return b;
	return (a > b ? b : a);
}

template<typename T>
T max(T a, T b)
{
	if (a == b)
		return b;
	return (a > b ? a : b);
}

int main()
{
	int a = 2;
	int b = 3;

	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}