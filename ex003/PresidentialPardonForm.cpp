


#include "PresidentialPardonForm.h"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", false, 25,5), target("default")
{}


PresidentialPardonForm::PresidentialPardonForm(const std::string &str) : AForm("PresidentialPardonForm", false, 25, 5),  target(str)
{}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj), target(obj.target)
{
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


void    PresidentialPardonForm::execute(const Bureaucrat & executor)  const
{
            if(!this->getSign())
               throw PresidentialPardonForm::FormNotSignedException();
            else if(executor.getGrade() > this->getGrade_execute())
                throw PresidentialPardonForm::GradeTooLowException();
            else 
                std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
                
}

