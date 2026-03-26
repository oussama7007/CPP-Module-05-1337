

#include "AForm.h"
#include  "Bureaucrat.h" 
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"




int main()
{
    Intern inter;
    AForm * form = inter.makeForm("RobotomyRequestForm", "simo");
    
}