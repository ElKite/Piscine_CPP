// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.class.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/04 15:25:41 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/04 19:59:09 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook() {
	contactNbr = 0;
	prompt();
	return ;
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::prompt() 
{
	std::cout << "\033[34mBienvenue dans XXPhoneBook2000XX\033[0m" << std::endl;
	std::cout << "\033[34mLes commandes disponibles sont : ADD - SEARCH - EXIT\033[0m" << std::endl;
	std::cout << "\033[34mVeuillez entrer une commande\033[0m" << std::endl;

	std::string cmd;

	while (42) {
		std::cout << "\033[32mXXPHONEBOOK2000XX ?>\033[0m ";
		if (std::cin.eof()) {
			std::cout << std::endl;
			std::exit(1);
		}
		std::cin >> cmd;
		if (cmd == "ADD")
			add();
		else if (cmd == "SEARCH")
			search();
		else if (cmd == "EXIT")
			exit();
		else {
			std::cout << "Cette commande n'est disponible que dans XXPhoneBook3000XX" << std::endl;
			std::cout << "Les commandes disponibles sont : ADD - SEARCH - EXIT" << std::endl;
		}
	}
}

void PhoneBook::add()
{
	if (contactNbr >= 8)
	{
		std::cout << "Vous possedez le maximum de contacts (9)" << std::endl;
		std::cout << "Saissez le login du contact a remplacer ou taper CANCEL" << std::endl;
		
		std::string tmp;
		std::cin >> tmp;
		if (tmp != "CANCEL")
		{
			int flag = 0;
			for (int i = 0; i < 8; i++) {
				if (contacts[i].getLogin() == tmp) {
					createContact(i);
					flag = 1;
					break ;
				}
				if (flag == 0)
					std::cout << "Ce contact n'existe pas..." << std::endl;
			}
		}
	}
	else 
	{
		createContact(contactNbr);
		contactNbr++;
	}
		
}

void PhoneBook::createContact(int key)
{
	std::string tmp;

	std::cout << "Creation du contact..." << std::endl;

	std::cin.clear();
	std::cin.ignore(1e3, '\n');
	std::cout << "Entrer un prenom" << std::endl;
	std::getline(std::cin, tmp);
	contacts[key].setFirstName(tmp);

//	std::cin.clear();
//	std::cin.ignore(1e3, '\n');
	std::cout << "Entrer un nom" << std::endl;
//	std::cin >> tmp;
	std::getline(std::cin, tmp);
	contacts[key].setLastName(tmp);

//	std::cin.clear();
//	std::cin.ignore(1e3, '\n');
	std::cout << "Entrer un nickname" << std::endl;
//	std::cin >> tmp;
	std::getline(std::cin, tmp);
	contacts[key].setNickname(tmp);

	//std::cin.clear();
	//std::cin.ignore(1e3, '\n');
	std::cout << "Entrer un login" << std::endl;
	std::getline(std::cin, tmp);
	//std::cin >> tmp;
	contacts[key].setLogin(tmp);

//	std::cin.clear();
//	std::cin.ignore(1e3, '\n');
	std::cout << "Entrer un code postal" << std::endl;
//	std::cin >> tmp;
	std::getline(std::cin, tmp);
	contacts[key].setPostalAddress(tmp);

//	std::cin.clear();
//	std::cin.ignore(1e3, '\n');
	std::cout << "Entrer une adresse mail" << std::endl;
	std::getline(std::cin, tmp);
//	std::cin >> tmp;
	contacts[key].setEmailAddress(tmp);

	std::cout << "Entrer un numero de telephone" << std::endl;
	std::getline(std::cin, tmp);
	contacts[key].setPhoneNumber(tmp);

//	std::cin.clear();
//	std::cin.ignore(1e3, '\n');
	std::cout << "Entrer une date de naissance" << std::endl;
//	std::cin >> tmp;
	std::getline(std::cin, tmp);
	contacts[key].setBirthdayDate(tmp);

//	std::cin.clear();
//	std::cin.ignore(1e3, '\n');
	std::cout << "Entrer un plat favoris" << std::endl;
//	std::cin >> tmp;
	std::getline(std::cin, tmp);
	contacts[key].setFavoriteMeal(tmp);

//	std::cin.clear();
//	std::cin.ignore(1e3, '\n');
	std::cout << "Entrer la couleur de vos sous vetements" << std::endl;
	std::getline(std::cin, tmp);
//	std::cin >> tmp;
	contacts[key].setUnderwearColor(tmp);

//	std::cin.clear();
//	std::cin.ignore(1e3, '\n');
	std::cout << "Entrer votre pire secret" << std::endl;
	std::getline(std::cin, tmp);
//	std::cin >> tmp;
	contacts[key].setDarkestSecret(tmp);

//	std::cin.clear();
//	std::cin.ignore(1e3, '\n');
}

void PhoneBook::search()
{
	if (contactNbr == 0)
		std::cout << "Vous n'avez pas de contacts" << std::endl;
	else {
		std::cout << "|     index|first name| last name|     login|" << std::endl;
		
		int i = -1;
		int space;
		while (++i < contactNbr) {
			std::cout << "|         ";
			std::cout << i;
			std::cout << "|";
			
			if (contacts[i].getFirstName().length() > 10)
			{
				space = -1;
				while (++space != 9)
					std::cout << contacts[i].getFirstName()[space];
				std::cout << ".";
			}
			else
			{
				space = 10 - contacts[i].getFirstName().length();
				while (space--)
					std::cout << " ";
				std::cout << contacts[i].getFirstName();
			}
			std::cout << "|";
			if (contacts[i].getLastName().length() > 10)
			{
				space = -1;
				while (++space != 9)
					std::cout << contacts[i].getLastName()[space];
				std::cout << ".";
			}
			else
			{
				space = 10 - contacts[i].getLastName().length();
				while (space--)
					std::cout << " ";
				std::cout << contacts[i].getLastName();
			}
			std::cout << "|";
			if (contacts[i].getNickname().length() > 10)
			{
				space = -1;
				while (++space != 9)
					std::cout << contacts[i].getNickname()[space];
				std::cout << ".";
			}
			else
			{
				space = 10 - contacts[i].getNickname().length();
				while (space--)
					std::cout << " ";
				std::cout << contacts[i].getNickname();
			}
			std::cout << "|";
			std::cout << std::endl;
		}

		std::cout << "Saissisez l'index du contact a selectionner" << std::endl;
		
		std::string index;
		std::cin >> index;
		if (index.length() == 1 && (index[0] >= '0' && index[0] <= '9'))
			displayContact(index[0] - 48);
	}
}

void PhoneBook::displayContact(int i)
{
	std::cout << "Prenom: " << contacts[i].getFirstName() << std::endl;
	std::cout << "Nom: " << contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
	std::cout << "Login: " << contacts[i].getLogin() << std::endl;
	std::cout << "Adresse Postale: " << contacts[i].getPostalAddress() << std::endl;
	std::cout << "Email: " << contacts[i].getEmailAddress() << std::endl;
	std::cout << "Telephone: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Anniversaire: " << contacts[i].getBirthdayDate() << std::endl;
	std::cout << "Plat Favoris: " << contacts[i].getFavoriteMeal() << std::endl;
	std::cout << "Couleur sous vetements: " << contacts[i].getUnderwearColor() << std::endl;
	std::cout << "Plus noir secret: " << contacts[i].getDarkestSecret() << std::endl;
}

void PhoneBook::exit() 
{
		std::cout << "Fermeture de XXPhoneBook2000XX" << std::endl;
		std::exit(1);
}
