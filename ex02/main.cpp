
#include "AForm.h"
#include  "Bureaucrat.h" 
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"



int main()
{

    try
    {
            Bureaucrat b;
            ShrubberyCreationForm tree;
            tree.execute(b);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << " -------------------------------\n"<< std::endl;
    // Test 1: PresidentialPardonForm - success
    try {
        PresidentialPardonForm form("Bob");
        Bureaucrat b("Alice", 5);
        b.signForm(form);
        b.executeForm(form);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << " -------------------------------\n"<< std::endl;

    // Test 2: execute without signing first
    try {
        PresidentialPardonForm form("Bob");
        Bureaucrat b("Alice", 5);
        b.executeForm(form);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << " -------------------------------\n"<< std::endl;

    // Test 3: ShrubberyCreationForm - check the file is created
    try {
        ShrubberyCreationForm form("garden");
        Bureaucrat b("Alice", 1);
        b.signForm(form);
        b.executeForm(form);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << " -------------------------------\n"<< std::endl;

    // Test 4: RobotomyRequestForm - run multiple times to see 50%
    try {
        RobotomyRequestForm form("Bender");
        Bureaucrat b("Alice", 1);
        b.signForm(form);
        for (int i = 0; i < 5; i++)
            b.executeForm(form);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}