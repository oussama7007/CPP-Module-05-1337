

#include "Bureaucrat.h"


int main()
{
    // Test 1: valid form construction and printing
    try {
        Form f("FormB", false, 50, 25);
        std::cout << f;
    }
    catch (std::exception &e) {
        std::cout << "Error "<< e.what() << std::endl;
    }
    std::cout << "--------------------------------------------" << std::endl;
    // Test 2: form with invalid grade at construction
    try {
        Form f("FormC", false, 0, 25);
        std::cout << f;
    }
    catch (std::exception &e) {
        std::cout<< "Error: " << e.what() << std::endl;
    }
        std::cout << "--------------------------------------------" << std::endl;
    // Test 3: bureaucrat with high enough grade signs form
    try {
        Form f("FormD", false, 50, 25);
        Bureaucrat b("Alice", 30);
        b.signForm(f);
        std::cout << f;
    }
    catch (std::exception &e) {
        std::cout << "Error: "<< e.what() << std::endl;
    }
        std::cout << "--------------------------------------------" << std::endl;
    // Test 4: bureaucrat with too low grade tries to sign
    try {
        Form f("FormE", false, 50, 25);
        Bureaucrat b("Bob", 80);
        b.signForm(f);
        std::cout << f;
    }
    catch (std::exception &e) {
        std::cout << "Error: "<< e.what() << std::endl;
    }
}