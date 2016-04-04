// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.class.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/04 13:28:51 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/04 13:37:21 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class PhoneBook {

public :

	void prompt(std::string cmd);	

private :

	void add();
	void search();
	void exit();

	Contact contacts[8];

};

#endif
