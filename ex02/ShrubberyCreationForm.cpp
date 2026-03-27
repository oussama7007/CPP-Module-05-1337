



#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm",false, 145, 137), target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm",false, 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other), target(other.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}


void    ShrubberyCreationForm::execute(const Bureaucrat & execute) const 
{
        if(!this->getSign())
            throw ShrubberyCreationForm::FormNotSignedException();
        else if (execute.getGrade() > this->getGrade_execute())
            throw ShrubberyCreationForm::GradeTooLowException();
        else
        {
            std::ofstream my_file((this->target + "_shrubbery").c_str());
            my_file << "   /\\\n";
            my_file << "  /**\\\n";
            my_file << " /****\\\n";
            my_file << "/******\\\n";
            my_file << "   ||\n";

            // my_file.close();
        }
}