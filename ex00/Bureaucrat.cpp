


#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string &str): name(str) {}


Bureaucrat::Bureaucrat() : name("default") {}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    this->grade = other.grade;
    this->name = other.name;
}
