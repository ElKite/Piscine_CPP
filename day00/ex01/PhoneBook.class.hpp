// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.class.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/04 13:28:51 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/04 19:32:51 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"

class PhoneBook {

public :

	void prompt();	
	PhoneBook();
	~PhoneBook();

private :

	void add();
	void search();
	void exit();
	void createContact(int key);
	void displayContact(int i);

	Contact contacts[8];
	int	contactNbr;
};

#endif
