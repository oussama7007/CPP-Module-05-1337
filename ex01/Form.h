

#pragma once

#include <iostream>
#include "Bureaucrat.h"

class Form
{
    private:
        const std::string name;
        bool sign;
        const int grade_sign;
        const int grade_execute;

    public:
        Form();
        ~Form();
        Form(const std::string str, bool sign, const int grade_sign, const int grade_execute);
        Form & operator=(const Form &other);
        Form(const Form &other);

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        
        std::string     getName() const;
        int             getGrade_sign() const;
        int             getGrade_execute() const;
        bool            getSign() const;

        void            beSigned(const Bureaucrat &obj);
};

std::ostream    &operator<<(std::ostream &out,const Form &obj);

