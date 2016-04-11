#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	this->_name = "exec 137";
	this->_signed = false;
	this->_grade = 145;
	this->_target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	this->_name = src.getName();
	this->_signed = src.isSigned();
	this->_grade = src.getGrade();
	this->_target = targetß
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src)
{
	*this = src;
	return *this;
}

ShrubberyCreationForm::execute(Bureaucrat const & src)
{
	if (this->_signed == true) {
		if (src.getGrade > this->grade) 
			throw Form::GradeTooLowException();
		else
		{

		}
	}
}