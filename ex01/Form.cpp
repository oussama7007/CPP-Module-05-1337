



#include "Form.h"

Form::Form() : name("default"), sign(false), grade_execute(0), grade_sign(0){}

Form::Form(const std::string str,
    bool sign, const int grade_sign, const int grade_execute): name(str), sign(sign), 
    grade_sign(grade_sign), grade_execute(grade_execute)
{
    if(grade_execute < 1 || grade_sign < 1 )
        throw Form::GradeTooHighException();
    else if(grade_sign > 150 || grade_execute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : name(other.name), sign(other.sign), grade_sign(other.grade_sign),
                grade_execute(other.grade_execute)
{}

Form & Form::operator=(const Form &other)
{
    if(this != &other)
    {
        this->sign = other.sign;
    }
    return *this;
}
Form::~Form() {}


const char *Form::GradeTooHighException::what() const throw()
{
    return " Form GradeTooHighException ";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return " Form GradeTooLowException ";
}


std::string     Form::getName() const
{
    return this->name;
}
int      Form::getGrade_execute() const 
{
        return this->grade_execute;
}
int     Form::getGrade_sign() const 
{
    return this->grade_sign;
}
bool    Form::getSign() const
{
        return this->sign;
}

void        Form::beSigned(const Bureaucrat &obj)
{
    
}

std::ostream    &operator<<(std::ostream &out,const Form &obj)
{
    out << obj.getName() << ", Form grade required to sign it " << obj.getGrade_sign() 
        << ", and the grade required to execute " << obj.getGrade_execute() << 
        ", and the boolean indicating whether it is signed " << obj.getSign() << std::endl;
}