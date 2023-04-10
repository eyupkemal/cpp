#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade){
	std::cout << "Bureaucrat  Constructor Called" << std::endl;
    setName(name);
    setGrade(grade);
}

Bureaucrat::Bureaucrat() : _name("kemal"), _grade(1)
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& Bureaucrat_Copy) : _name(Bureaucrat_Copy._name), _grade(Bureaucrat_Copy._grade)
{
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat person)
{
    setGrade(person._grade);
    setName(person._name);
    return(*this);
}

std::string Bureaucrat::getName()const {
    return(this->_name);
}

int Bureaucrat::getGrade(void)            const {return(this->_grade);}
void Bureaucrat::setName(std::string name){const_cast<std::string&>(this->_name) = name;}//type_cast yaptıktık burada const birşehyi const olmayan birşeye set ederken hatra verir eşittir operatörü

void Bureaucrat::setGrade(int grade){
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade >150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "destructor called"<<std::endl;
}

void  Bureaucrat::incrementGrade()
{
	if(_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if(_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form& F) const
{
	if (F.get_isSigned())
		std::cout << getName() << " signed " << F.getName() << std::endl;
	else if(getGrade() > F.get_isSigned())
		std::cout << getName() << " couldn’t sign " << F.getName() << " because grade is too low" << std::endl;
}

const char * Bureaucrat::GradeTooHighException::what()const throw(){
    return("grade cannot be tower than 1");
}

const char * Bureaucrat::GradeTooLowException::what()const throw(){
    return("grade cannot be lower than 150");
}

std::ostream&   operator<<(std::ostream& o, Bureaucrat& b) {
	o << b.getName() << ", grade level is " << b.getGrade()<<std::endl;
	return (o);
}
