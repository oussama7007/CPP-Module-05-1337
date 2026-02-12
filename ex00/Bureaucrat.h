


#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;        
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string &str);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat & operator=(const Bureaucrat &other);


        
};