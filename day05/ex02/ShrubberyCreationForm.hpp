#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class  ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ ShrubberyCreationForm();

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);

	virtual void execute(Bureaucrat const & src);
};

#endif