#pragma once 

#include <iostream>



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
                public:
                        const char  *what() const throw() ;
        };
        class GradeTooLowException : public std::exception 
        {
                public:
                        const char  *what() const throw();
        };
        std::string     getName() const;
        int     getGrade()  const ;
        void    increment();    // Remember, since grade 1 is the highest and 150 the lowest,
                                //incrementing a grade 3 should result in a grade 2 for the bureaucrat.
        void    decrement();

};

std::ostream& operator<<(std::ostream &out , const Bureaucrat& obj);