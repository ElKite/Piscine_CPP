#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try {
		Bureaucrat *bureaucrat = new Bureaucrat("Jean", 1);
		std::cout << *bureaucrat;
		bureaucrat->incGrade();
	} catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << "Grade already too high" << std::endl;
	} catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << "Grade already too low" << std::endl;
	}

	return 0;
}