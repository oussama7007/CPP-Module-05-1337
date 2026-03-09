


#include "PresidentialPardonForm.h"


PresidentialPardonForm::PresidentialPardonForm() : AForm(), target("default")
{}


PresidentialPardonForm::PresidentialPardonForm(std::string &str) : AForm(str, false, 145, 137),  target(str)
{}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{
    this->target = obj.target;
}


PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if(this != &obj)
    {
        AForm::operator=(obj);
        this->target = obj.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() 
{}


void    PresidentialPardonForm::execute(const Bureaucrat & executor)
{
            if(this->getSign() && executor.getGrade() < this->getGrade_execute())
                std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
            else    
                throw 
}
