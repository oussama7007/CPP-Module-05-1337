




#include <iostream>
#include "AForm.h"


class   Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &obj);
        Intern & operator=(const Intern &obj);
        
        AForm *    makeForm(std::string name, std::string target);
}