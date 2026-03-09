





#include "PresidentialPardonForm.h"


PresidentialPardonForm::PresidentialPardonForm() : target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string &str) : target(str)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    this->target = obj.target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if(this != &obj)
    {
        this->target = obj.target;
    }
    return *this;
}



PresidentialPardonForm::~PresidentialPardonForm()
{}

void    PresidentialPardonForm::execute(const Bureaucrat & execute)
{

}
