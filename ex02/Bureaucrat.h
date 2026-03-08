#pragma once 

#include <iostream>
#include "Form.h"

class Form;

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
        void    increment();    // Remember, since grade 1 is the highest and 150 the lowest,
                                //incrementing a grade 3 should result in a grade 2 for the bureaucrat.
        void    decrement();
        void    signForm(Form &obj) const;
};

std::ostream& operator<<(std::ostream &out , const Bureaucrat& obj);