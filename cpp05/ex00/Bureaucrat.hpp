#pragma once 

#include <iostream>
#include <string>
#include <iostream>

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
    
    int         getGrade(void);
    std::string getName(void);
    
    void        setGrade(int grade);
    void        setName(std::string name);
    
    void        decrementGrade();
    void        incrementGrade();

	

    class GradeTooHighException : public std::exception{
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception{//bu olayı anlamdım awq
        virtual const char * what() const throw();
    };
};

std::ostream&   operator<<(std::ostream& o, Bureaucrat& b);