

#include "AForm.h"
#include  "Bureaucrat.h" 
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"



int main()
{
    // Test 1: valid form creation
    Intern intern;
    AForm *form = intern.makeForm("RobotomyRequestForm", "Bender");
    delete form;

    // Test 2: invalid form name
    AForm *form2 = intern.makeForm("unknownForm", "Bender");
    (void)form2;
    // Test 3: create, sign and execute
    Bureaucrat b("Alice", 1);
    AForm *form3 = intern.makeForm("PresidentialPardonForm", "Bob");
    b.signForm(*form3);
    b.executeForm(*form3);
    delete form3;
}