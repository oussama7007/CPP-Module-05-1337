


// #include <iostream>
// #include <stdexcept>

// void    checkage(int age)
// {
//     if(age < 0 || age > 150)
//         throw std::runtime_error("----------the age is invalid--------------");
//     else 
//         std::cout << "the age is valid\n";
    
// }


// int main()
// {
//     try{
//         checkage(-4);

//     }
//     catch(std::exception &e )
//     {
//         std::cout << e.what() << std::endl;
//     }
//     return 0;
// }

#include <iostream>
#include <stdexcept>


int     parseInput(int n)
