


#include "RobotomyRequestForm.h"



RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", false, 72, 45), target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", false, 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other), target(other.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
               if(!this->getSign())
               throw RobotomyRequestForm::FormNotSignedException();
            else if(executor.getGrade() > this->getGrade_execute())
                throw RobotomyRequestForm::GradeTooLowException();
            else 
            {
                /*
                    Makes some drilling noises, then informs that <target> has been robotomized
                    successfully 50% of the time. Otherwise, it informs that the robotomy failed.
                */
               std::cout << "BZZZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
               std::cout << this->target << " has been robotomized successfully 50% of the time"
            }    
}