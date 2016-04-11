#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() 
{
	return ;
}

Form::Form(std::string const name, int grade)
	: _name(name), _grade(grade)
{
	this->_signed = false;
	if (_grade > 150)
		throw Form::GradeTooLowException();
	else if (_grade < 1)
		throw Form::GradeTooHighException();
	return ;
}

Form::Form(Form const & src)
{
	this->_name = src.getName();
	this->_grade = src.getGrade();
	this->_signed = src.isSigned();
}

Form::~Form()
{

}

Form & Form::operator=(Form const & src)
{
	*this = src;
	return *this;
}

void		Form::beSigned(Bureaucrat const & src)
{
	if (src.getGrade() > this->_grade)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

int 		Form::getGrade() const
{
	return this->_grade;
}

std::string Form::getName() const
{
	return this->_name;
}

bool		Form::isSigned() const
{
	return this->_signed;
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
	o << "<" << src.getName() << ">, Form grade <" << src.getGrade() << "> is signed ? : " << src.isSigned() << std::endl;
	return o;
}