




#include "Bureaucrat.h"




int main()
{
    Form obj;
    std::cout << obj;
    
    Bureaucrat ttt("oussama", 100);
    // try{ 
    //     Bureaucrat test("hello", 0);
    // }
    // catch(std::exception &e)
    // {
    //                 std::cout << "Error --------- " <<e.what() << std::endl;
    // }
    try
    {
        obj.beSigned(ttt);
    }
    catch(std::exception &e)
    {
            std::cout << "Error " <<e.what() << std::endl;
    }

}