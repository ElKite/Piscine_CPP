// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/04 13:03:46 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/04 17:57:23 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact {

public:

	Contact();
	~Contact();

	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getLogin();
	std::string getPostalAddress();
	std::string getEmailAddress();
	std::string getPhoneNumber();
	std::string getBirthdayDate();
	std::string getFavoriteMeal();
	std::string getUnderwearColor();
	std::string getDarkestSecret();

	void setFirstName(std::string s);
	void setLastName(std::string s);
	void setNickname(std::string s);
	void setLogin(std::string s);
	void setPostalAddress(std::string s);
	void setEmailAddress(std::string s);
	void setPhoneNumber(std::string s);
	void setBirthdayDate(std::string s);
	void setFavoriteMeal(std::string s);
	void setUnderwearColor(std::string s);
	void setDarkestSecret(std::string s);
	
private :

	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
};

#endif
