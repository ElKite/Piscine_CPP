
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() 
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
	: _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	this->_name = src.getName();
	this->_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	*this = src;
	return *this;
}

void		Bureaucrat::incGrade()
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void		Bureaucrat::decGrade() 
{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

int 		Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << "<" << src.getName() << ">, bureaucrat grade <" << src.getGrade() << ">" << std::endl;
	return o;
}