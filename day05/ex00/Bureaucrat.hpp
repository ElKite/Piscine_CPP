#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {

private:

	std::string _name;
	int			_grade;

public:

	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const & src);
	virtual ~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const & src);

	void		incGrade();
	void		decGrade();

	int 		getGrade() const;
	std::string getName() const;

	class 		GradeTooHighException : public std::exception {

	};

	class 		GradeTooLowException : public std::exception {

	};
};

	std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);

#endif