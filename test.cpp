#include <iostream>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mod(int a, int b) {}
int main()
{
    
    int (*operation)(int, int);
    
    operation = add;
    std::cout << operation(5, 3) << std::endl;
    
    operation = sub;
    std::cout << operation(5, 3) << std::endl;
}