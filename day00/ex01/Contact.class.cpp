// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/04 13:37:32 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/04 17:57:37 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.class.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}


/*Getters*/


std::string Contact::getFirstName() { return this->firstName; }

std::string Contact::getLastName() { return this->lastName; }

std::string Contact::getNickname() { return this->nickname; }

std::string Contact::getLogin() { return this->login; }

std::string Contact::getPostalAddress() { return this->postalAddress; }

std::string Contact::getEmailAddress() { return this->emailAddress; }

std::string Contact::getPhoneNumber() { return this->phoneNumber; }

std::string Contact::getBirthdayDate() { return this->birthdayDate; }

std::string Contact::getFavoriteMeal() { return this->favoriteMeal; }

std::string Contact::getUnderwearColor() { return this->underwearColor; }

std::string Contact::getDarkestSecret() { return this->darkestSecret; }


/*Setters*/

void Contact::setFirstName(std::string s) { this->firstName = s; }

void Contact::setLastName(std::string s) { this->lastName = s; }

void Contact::setNickname(std::string s) { this->nickname = s; }

void Contact::setLogin(std::string s) { this->login = s; }

void Contact::setPostalAddress(std::string s) { this->postalAddress = s; }

void Contact::setEmailAddress(std::string s) { this->emailAddress = s; }

void Contact::setPhoneNumber(std::string s) { this->phoneNumber = s; }

void Contact::setBirthdayDate(std::string s) { this->birthdayDate = s; }

void Contact::setFavoriteMeal(std::string s) { this->favoriteMeal = s; }

void Contact::setUnderwearColor(std::string s) { this->underwearColor = s; }

void Contact::setDarkestSecret(std::string s) { this->darkestSecret = s; }
