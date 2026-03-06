


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



/*
Exercise 2 — multiple catch blocks
Write a function parseInput(int n) that:

throws an std::runtime_error if n is negative
throws an std::invalid_argument if n is zero
returns n * 2 otherwise

Catch each exception separately and print a different message for each.
*/
// int     parseInput(int n)
// {
//     if(n <0 )
//         throw std::runtime_error("the number is negative");
//     else if(n == 0)
//         throw std::invalid_argument("the number is zero");
//     return n*2;
// }

// int main()
// {
//     try
//     {
//         int result = parseInput(0);

//         std::cout << "the result is " << result << std::endl;
//     }
//     catch(std::exception &t)
//     {
//         std::cout << t.what() << std::endl;
//     }

// }



/*
Exercise 3 — rethrowing
This one is trickier. Write a function inner() that throws, and a function outer() that calls inner() inside a try/catch — but instead of handling it, rethrows the exception using just throw;. Then catch it in main.
inner() → throws → outer() catches and rethrows → main() catches
Hint: rethrowing uses just throw; with no argument inside a catch block.
*/


void inner()
{
    // YOU throw something here first
    throw std::runtime_error("something went wrong");
}

void outer()
{
    try {
        inner();  // inner throws, outer catches it...
    }
    catch (std::exception &e) {
        std::cout << "outer caught it, rethrowing...\n";
        //throw;  // ...then passes it along with throw;
    }
}

int main()
{
    try {
        outer();  // outer rethrows, main catches it finally
    }
    catch (std::exception &e) {
        std::cout << "main caught: " << e.what() << std::endl;
    }
}
