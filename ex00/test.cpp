


#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0)
        throw std::runtime_error("Cannot divide by zero!");
    return a / b;
}

int main() {
    try {
        int result = divide(10, 9);  // this will throw
        std::cout << result << std::endl;  // this line never runs
    }
    catch (std::exception &e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
