// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/04 13:03:46 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/04 13:36:43 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_CLASS_H
# define CONCTACT_CLASS_H

class Contact {

public:

	Contact();
	~Contact();

	std::string getFistName();
	std::string getLastName();
	std::string getNickName();
	std::string getLogin();
	std::string getPostalAddress();
	std::string getEmailAddress();
	std::string getPhoneNumber();
	std::string getBirthdayDate();
	std::string getFavoriteMeal();
	std::string getUndeawearColor();
	std::string getDarkestSecret();

	std::string setFistName();
	std::string setLastName();
	std::string setNickName();
	std::string setLogin();
	std::string setPostalAddress();
	std::string setEmailAddress();
	std::string setPhoneNumber();
	std::string setBirthdayDate();
	std::string setFavoriteMeal();
	std::string setUndeawearColor();
	std::string setDarkestSecret();
	
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
	std::string undearwearColor;
	std::string darkestSecret;
};

#endif
