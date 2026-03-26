

#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &obj) {
    (void)obj;
}

Intern & Intern::operator=(const Intern &obj)
{
    (void)obj;
    return *this; 
}

AForm *createPresidential(std::string target) { return new PresidentialPardonForm(target); }
AForm *createRobotomy(std::string target) { return new RobotomyRequestForm(target); }
AForm *createShrubbery(std::string target) { return new ShrubberyCreationForm(target); }

AForm * Intern::makeForm(std::string Formname, std::string target)
{
    std::string buff[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    int i = -1;
    AForm* (*forms[3])(std::string target) ;
    forms[0] = createPresidential;
    forms[1] = createRobotomy;
    forms[2] = createShrubbery;
    while(++i < 3)
    {
        if(Formname == buff[i])
        {
            std::cout << "Intern creates " << buff[i] << std::endl;
            return forms[i](target);
        }
    }
    std::cout << "Error: Form name not found" << std::endl;
    return NULL;
}
