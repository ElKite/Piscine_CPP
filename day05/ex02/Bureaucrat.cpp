
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

void		Bureaucrat::signForm(Form * form) 
{
	if (form->getGrade() < this->_grade)
		std::cout << "<" << this->_name <<"> cannot sign <" << form->getName() << "> because grade is too low" << std::endl;
	else if (form->isSigned())
		std::cout << "<" << this->_name <<"> cannot sign <" << form->getName() << "because form is already signed" << std::endl;
	else
		form->beSigned(*this);
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