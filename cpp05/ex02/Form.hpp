#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form{
    private:

    const std::string name;//adı
    bool              signature;//kagıt imzalandı mı
    const int         PaperGrade;//kagıdın leveli
    const int         beGrade;//imzalayanın  grade

    public:

    Form(std::string _name,int _BeGrade,int _PaperGrade);
    ~Form();

    Form&       operator=(Form person);
    bool        get_isSigned();
    int         getPaperGrade(void);
    int         getBeGrade(void);
    std::string getName(void);
    
    void        setSigned(bool);
    void        setPaperGrade(int);
    void        setBeGrade(int);
    void        setName(std::string);

    void        beSigned(Bureaucrat& B);

    class GradeTooHighException : public std::exception{
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception{//bu olayı anlamdım awq
        virtual const char * what() const throw();
    };
    class NotEnoughToSign : public std::exception{
        virtual const char * what() const throw();
    };
};

std::ostream& operator<<(std::ostream &o, Form& F);
