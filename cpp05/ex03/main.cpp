#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		std::cout << std::endl;
		Intern RandomIntern;
		Form* Form;
		Bureaucrat huseyin("ali", 1);

		std::cout << std::endl;

		std::cout << "===========ShrubberyCreationForm Creation Test===========" << std::endl;
		Form = RandomIntern.makeForm("ShrubberyCreationForma", "shrubbery");
		std::cout << Form->getName();

		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
/* 
	std::cout << "============RobotomyRequestForm Creation Test============" << std::endl;
	Form = RandomIntern.makeForm("robotomy request", "robotomy");
	Form->beSigned(fatma);
	fatma.signForm(*Form);
	
	std::cout << std::endl;

	std::cout << "===========PresidentialPardonForm Creation Test===========" << std::endl;
	Form = RandomIntern.makeForm("presidential pardon", "presidential");
	Form->beSigned(fatma);
	fatma.signForm(*Form);
	delete Form;
	std::cout << std::endl;

	std::cout << "===============UndefinedForm Creation Test===============" << std::endl;
	Form = RandomIntern.makeForm("undefined", "undefined");
	delete Form;
	std::cout << std::endl;
	return 0; */

/* 	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender"); */
}