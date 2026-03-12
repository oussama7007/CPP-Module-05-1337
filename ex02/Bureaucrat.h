#pragma once 

#include <iostream>
#include "AForm.h"

class AForm;

class Bureaucrat
{
    private:
        const std::string name;        
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string &str, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat & operator=(const Bureaucrat &other);
        class GradeTooHighException : public std::exception 
        {
                const char  *what() const throw() ;
        };
        class GradeTooLowException : public std::exception 
        {
                const char  *what() const throw();
        };
        std::string     getName() const;
        
        int     getGrade()  const ;
        void    increment();   
        void    decrement();
        void    signForm(AForm &obj) const;
        void    executeForm(AForm const & form)  const;
};

std::ostream& operator<<(std::ostream &out , const Bureaucrat& obj);