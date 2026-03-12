
#include "Bureaucrat.h"


Bureaucrat::Bureaucrat(const std::string &str, int grade): name(str), grade(grade)
{
    if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();

}

Bureaucrat::Bureaucrat() : name("default"), grade(1) {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name) , grade(other.grade) {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other )
    {
        this->grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
        return "Error Grade Too High Exception\n";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
        return "Error Grade Too Low Exception\n";
}

int        Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string         Bureaucrat::getName() const
{
    return this->name;
}

void      Bureaucrat::increment()
{
    
    if(this->grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrement()
{
    if(this->grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

void    Bureaucrat::signForm(AForm &obj) const
{
    try
    {
            if(!obj.getSign())
            {
                obj.beSigned(*this);
                std::cout << this->getName() << " signed " << obj.getName() << std::endl;
            }
    }
    catch(std::exception &t)
    {
        std::cout << this->getName() << " couldn't sign " << obj.getName() << " because "<< t.what() <<std::endl;
    }
    
}
void     Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << getName() << " couldn't execute " << obj.getName() 
                  << " because " << t.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream &out,const  Bureaucrat &obj)
{
    out << obj.getName() << ", "<< "bureaucrat grade " << obj.getGrade() << std::endl;
    return out; 
}