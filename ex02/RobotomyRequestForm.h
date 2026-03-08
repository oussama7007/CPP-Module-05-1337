
#pragma once 

#include "AForm.h"



class RobotomyRequestForm : public AForm
{
private:
    std::string target;

public:
    // Canonical form
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    ~RobotomyRequestForm();

    // Member function
    void execute(Bureaucrat const & executor) const;
};

#endif