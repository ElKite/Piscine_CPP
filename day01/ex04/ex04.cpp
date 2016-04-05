// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 16:21:42 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 16:34:28 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main() {

	std::string S = "HI THIS IS BRAIN";
	std::string& ref = S;
	std::string* pt = &S;

	std::cout << S << std::endl;
	std::cout << ref << std::endl;
	std::cout << *pt << std::endl;
	return (0);
}
