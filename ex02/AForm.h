

#pragma once

#include <iostream>

#include "Bureaucrat.h"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool sign;
        const int grade_sign;
        const int grade_execute;

    public:
        AForm();
        virtual ~AForm();
        AForm(const std::string str, bool sign, const int grade_sign, const int grade_execute);
        AForm & operator=(const AForm &other);
        AForm(const AForm &other);
        
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
        virtual void            execute(const Bureaucrat & executor) = 0;
        void            beSigned(const Bureaucrat &obj);
};

std::ostream    &operator<<(std::ostream &out,const AForm &obj);
