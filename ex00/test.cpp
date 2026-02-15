/*
Level 1 – Basic Exception Throwing
🎯 Goal:

Understand how throw and catch work.

📝 Exercise 1:

Create a program that:

Reads an integer

If the number is negative → throw an exception

Catch it using std::exception
*/

#include <iostream>
#include <exception>

int main()
{
int a = 9;

try 
{
    if(a < 10)
        throw std::exception();
    std::cout << "bravo" << std::endl;
}
catch (std::exception &aa)
{
    printf("an exception has accured");

}
}