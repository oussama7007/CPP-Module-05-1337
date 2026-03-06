


#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string &str): name(str) {}


Bureaucrat::Bureaucrat() : name("default") {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name) , grade(other.grade) {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other )
    {
        this->grade = other.grade;
        this->name = other.name;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}
