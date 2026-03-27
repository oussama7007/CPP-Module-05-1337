


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
               std::cout << "BZZZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
               int r = rand() % 2;
               if (r == 1)
               {
                        std::cout << this->target << " has been robotomized successfully" << std::endl;
               }
               else
               {
                        std::cout << "Robotomy failed" << std::endl;
               }
            }
}