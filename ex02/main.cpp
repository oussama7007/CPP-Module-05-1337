

#include "AForm.h"
#include  "Bureaucrat.h" 
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"



int  main()
{
    try
    {
        PresidentialPardonForm form("Bob");
        Bureaucrat b("Alice", 500);
        b.signForm(form);
        // b.executeForm(form);
    }
    catch( std::exception &e)
    {
        std::cout <<   e.what(); 
    }
}