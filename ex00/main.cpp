
#include  "Bureaucrat.h"

int main()
{ 
    try {
        Bureaucrat b1("Frank", 12);
        Bureaucrat b2(b1);
        std::cout << b2;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout <<  "-----------------------------------" << std::endl;
    try 
    {
        Bureaucrat obj( "oussama", 150);
        for(int i = 0; i <= 16; i++)
            obj.increment();
        std::cout << obj;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout <<  "-----------------------------------" << std::endl;
    try {
        Bureaucrat b("Bob", 0);
        std::cout << b;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout <<  "-----------------------------------" << std::endl;
    try {
        Bureaucrat b("Charlie", 150);
        b.decrement();
        Bureaucrat b1(b);
        std::cout << b1;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}