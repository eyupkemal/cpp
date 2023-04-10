#include "Form.hpp"
#include "Bureaucrat.hpp"
int         Form::getBeGrade(void){return(this->beGrade);}
std::string Form::getName(void){return(this->name);}
int         Form::getPaperGrade(void){return(this->PaperGrade);}
bool        Form::get_isSigned(){return this->signature;}

void        Form::setBeGrade(int _beGrade){const_cast<int&>(this->beGrade) = _beGrade;}
void        Form::setPaperGrade(int _grade){const_cast<int&>(this->beGrade) = _grade;}
void        Form::setName(std::string _name){const_cast<std::string&>(this->name) = _name;};
void        Form::setSigned(bool i){this->signature = i;}

Form::Form(std::string _name,int _BeGrade,int _PaperGrade) : beGrade(_BeGrade) , PaperGrade(_PaperGrade){
    std::cout << green << "Form constructor" << white << std::endl;
    setName(_name);
    if(getBeGrade() < 1 || getPaperGrade() <1)
        throw GradeTooHighException();
    else if(getBeGrade() >150 || getPaperGrade() > 150)
        throw GradeTooLowException();
}
Form::~Form(){
        std::cout << red << "Form destuructor" << white << std::endl;
}

void Form::beSigned(Bureaucrat& B){
        if (B.getGrade() > getPaperGrade())
                throw Form::NotEnoughToSign();
        else
            std::cout << this->getName() << ", signed from " << B.getName() << std::endl;
        signature = 1;

}

Form& Form::operator=(Form person)
{
        setPaperGrade(person.getPaperGrade());
        setBeGrade(person.getBeGrade());
        setName(person.getName());
        person.signature = signature;
        return(*this);
}

std::ostream&	operator<<(std::ostream& o, Form& n) {
        o << "name " << n.getName()
        << " signed " << n.get_isSigned()
        << " Grade " << n.getBeGrade()
        << " Execute " << n.getPaperGrade();
        return o;
}

const char * Form::NotEnoughToSign::what() const throw(){
        return("NotEnoughToSign");
}

const char * Form::GradeTooHighException::what() const throw(){
        return("GradeTooHighException");
}

const char * Form::GradeTooLowException::what() const throw(){
        return("GradeTooLowException");
}