


#include <iostream>
#include <string>


class Bureaucrat
{
    private:
        const std::string name;        
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string &str, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat & operator=(const Bureaucrat &other);
        class GradeTooHighException : public std::exception 
        {
                public:
                        const char  *what() const throw() ;
        };
        class GradeTooLowException : public std::exception 
        {
                public:
                        const char  *what() const throw();
        };
        std::string     getName() const;
        int     getGrade()  const ;
        void    increment();    // Remember, since grade 1 is the highest and 150 the lowest,
                                //incrementing a grade 3 should result in a grade 2 for the bureaucrat.
        void    decrement();

};

std::ostream& operator<<(std::ostream &out , const Bureaucrat& obj);



class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int grade_sign;
        const int grade_execute;

    public:
        Form();
        ~Form();
        Form(const std::string str, bool sign, const int grade_sign, const int grade_execute);
        Form & operator=(const Form &other);
        Form(const Form &other);

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        
        std::string     getName() const;
        int             getGrade_sign() const;
        int             getGrade_execute() const;
        bool            getSign() const;

        void            beSigned(const Bureaucrat &obj);
};
std::ostream    &operator<<(std::ostream &out,const Form &obj);


Form::Form() : name("default"), sign(false), grade_sign(1),  grade_execute(1){}

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
    return " Form: Grade Too High Exception ";
}



const char *Form::GradeTooLowException::what() const throw()
{
    return " Form: Grade Too Low Exception ";
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

void    bureaucrat()







Bureaucrat::Bureaucrat(const std::string &str, int grade): name(str), grade(grade)
{
    if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();

}

Bureaucrat::Bureaucrat() : name("default"), grade(10) {}

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
        return ("Error Grade Too High Exception ");        
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
        return "Error Grade Too Low Exception ";
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
    
    if(this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrement()
{
    if(this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

std::ostream & operator<<(std::ostream &out,const  Bureaucrat &obj)
{
    out << obj.getName() << ", "<< "bureaucrat grade " << obj.getGrade() << std::endl;
    return out; 
}




