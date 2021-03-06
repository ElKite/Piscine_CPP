// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/05 14:46:42 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/05 14:57:13 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap() {
	Pony *joe = new Pony("joe", "brown", 12);

	std::cout << "My name is " <<joe->getName() << " my color is " << joe->getColor() << " and I'm " << joe->getAge() << std::endl;;
	delete joe;
}

void ponyOnTheStack() {
	Pony duke = Pony("duke", "grey", 20);

	std::cout << "My name is " << duke.getName() << " my color is " << duke.getColor() << " and I'm " << duke.getAge() << std::endl;; 
}

int main() {
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
