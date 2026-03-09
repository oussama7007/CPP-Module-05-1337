


#pragma once

#include "AForm.h"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
    
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &str);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm & operator=(const PresidentialPardonForm& obj);
        ~PresidentialPardonForm();

        void    execute(const Bureaucrat & executor);
};


