#pragma once
#include <iostream>
#include <string>
#include <iostream>
#include "Form.h"


#define green "\033[1;32m"
#define red "\033[1;31m"
#define white "\033[0m"


class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int               _grade;
public:
    Bureaucrat ();
    Bureaucrat (std::string name,int grade);
    ~Bureaucrat();
    Bureaucrat (const Bureaucrat& Bureaucrat_Copy);
    
    Bureaucrat& operator=(Bureaucrat person);
    
    int         getGrade(void)const;
    std::string getName(void)const;
    
    void        setGrade(int grade) ;
    void        setName(std::string name);
    
    void        decrementGrade();
    void        incrementGrade();

	void signForm(Form& F) const;

    class GradeTooHighException : public std::exception{
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception{//bu olayı anlamdım awq
        virtual const char * what() const throw();
    };
};

std::ostream&   operator<<(std::ostream& o, Bureaucrat& b);