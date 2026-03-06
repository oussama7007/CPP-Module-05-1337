


#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string &str, int grade): name(str), grade(grade) {}


Bureaucrat::Bureaucrat() : name("default"), grade(1) {}

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
