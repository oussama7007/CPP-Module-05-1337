


#include <iostream>
#include <string>


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




#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string &str, int grade): name(str), grade(grade)
{
    if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();

}

Bureaucrat::Bureaucrat() : name("default"), grade(10) {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name) , grade(other.grade) {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other )
    {
        this->grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
        return ("Error Grade Too High Exception ");        
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
        return "Error Grade Too Low Exception ";
}

int        Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string         Bureaucrat::getName() const
{
    return this->name;
}

void      Bureaucrat::increment()
{
    
    if(this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrement()
{
    if(this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

std::ostream & operator<<(std::ostream &out,const  Bureaucrat &obj)
{
    out << obj.getName() << ", "<< "bureaucrat grade " << obj.getGrade() << std::endl;
    return out; 
}


int main()
{
    
}