

#include "AForm.h"

AForm::AForm() : name("default"), sign(false), grade_sign(1),  grade_execute(1){}

AForm::AForm(const std::string str,
    bool sign, const int grade_sign, const int grade_execute): name(str), sign(sign), 
    grade_sign(grade_sign), grade_execute(grade_execute)
{
    if(grade_execute < 1 || grade_sign < 1 )
        throw AForm::GradeTooHighException();
    else if(grade_sign > 150 || grade_execute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other) : name(other.name), sign(other.sign), grade_sign(other.grade_sign),
                grade_execute(other.grade_execute)
{}


AForm & AForm::operator=(const AForm &other)
{
    if(this != &other)
    {
        this->sign = other.sign;
    }
    return *this;
}

AForm::~AForm() {}

const char *AForm::GradeTooHighException::what() const throw()
{
    return " AForm: Grade Too High Exception ";
}



const char *AForm::GradeTooLowException::what() const throw()
{
    return " AForm: Grade Too Low Exception ";
}



std::string     AForm::getName() const
{
    return this->name;
}



int      AForm::getGrade_execute() const 
{
        return this->grade_execute;
}



int     AForm::getGrade_sign() const 
{
    return this->grade_sign;
}



bool    AForm::getSign() const
{
        return this->sign;
}

const char *        AForm::FormNotSignedException::what() const throw()
{
    return "Form Not Signed Exception";
}

void        AForm::beSigned(const Bureaucrat &obj)
{
    if(obj.getGrade() <= this->grade_sign)
        this->sign = true;
    else 
        throw AForm::GradeTooLowException();
    
}



std::ostream    &operator<<(std::ostream &out,const AForm &obj)
{
    out << "AForm name: " <<obj.getName() << "\nAForm grade required to sign it :" << obj.getGrade_sign() 
        << "\nand the grade required to execute :" << obj.getGrade_execute() << 
        "\nand the boolean indicating whether it is signed :" << obj.getSign() << std::endl;
    return out;
}


/*
#!/bin/bash

REPO="/path/to/repo"
LOG="$REPO/autopush.log"

cd "$REPO" || exit

while true; do
    echo "[$(date)] Checking..." >> "$LOG"

    if [[ -n $(git status --porcelain) ]]; then
        git add .
        git commit -m "Auto update $(date)"
        git push >> "$LOG" 2>&1
        echo "[$(date)] Changes pushed" >> "$LOG"
    else
        echo "[$(date)] No changes" >> "$LOG"
    fi

    sleep 3600
done
*/