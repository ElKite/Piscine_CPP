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
	try {
		Bureaucrat *bureaucrat = new Bureaucrat("Denis", 11);
		Form *form = new Form("FD -7 .89", 10);

		std::cout << *bureaucrat;
		std::cout << *form;

		bureaucrat->signForm(form);
		bureaucrat->incGrade();
		bureaucrat->signForm(form);
		std::cout << *form;

	} catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << "Grade already too high" << std::endl;
	} catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << "Grade already too low" << std::endl;
	} catch (Form::GradeTooLowException & e) {
		std::cout << "Grade already too low to sign the form" << std::endl;
	}

	return 0;
}