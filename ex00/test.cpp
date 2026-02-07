

#include <iostream>


class My_class
{
    private:
        std::string *str;
    public:
        My_class();
        My_class(const std::string &str);
        My_class(const My_class &other);
        My_class & operator=(const My_class &other);
        ~My_class();
};


My_class::My_class(const std::string &str)
{
    printf("primitize constructor\n");
    this->str = new std::string(str);
}

My_class::My_class() {

    printf("default constructor \n");
    this->str = new std::string("default");
}

My_class::My_class(const My_class &other)
{
    printf("copy constructor\n");
    this->str = nullptr;
    *this = other;
}

My_class & My_class::operator=(const My_class & other)
{
    printf("assignment operator\n");

    if(this != &other)
    {
        delete this->str;
        this->str = new std::string(*other.str);
    }
    return *this;
}

My_class::~My_class() {
    printf("deconstructor\n");
    delete this->str;
}


int main()
{
    My_class a("what the fuck");
    My_class b(a);
    My_class g;
    printf("============================\n");
    My_class c = a = b = g;
}