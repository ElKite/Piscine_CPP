#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form {

private:

	std::string _name;
	bool		_signed;
	int			_grade;

public:

	Form();
	Form(std::string const name, int grade);
	Form(Form const & src);
	virtual ~Form();

	Form & operator=(Form const & src);

	void		beSigned(Bureaucrat const & src);

	int 		getGrade() const;
	std::string getName() const;
	bool		isSigned() const;


	class 		GradeTooHighException : public std::exception {

	};

	class 		GradeTooLowException : public std::exception {

	};
};

	std::ostream & operator<<(std::ostream & o, Form const & src);

#endif