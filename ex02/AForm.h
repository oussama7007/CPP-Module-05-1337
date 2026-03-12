

#pragma once

#include <iostream>
#include <cstdlib>
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
        class FormNotSignedException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        std::string     getName() const;
        int             getGrade_sign() const;
        int             getGrade_execute() const;
        bool            getSign() const;
        virtual void            execute(const Bureaucrat & executor) const = 0; // darori tzid const hitach Bureaucrat::executeForm(AForm const & form) 
                                                                    //form katkhdem  gir m3a  const functions so  zedtaha flekher hna o f ga3 childs 
        void            beSigned(const Bureaucrat &obj);
};
std::ostream    &operator<<(std::ostream &out,const AForm &obj);
