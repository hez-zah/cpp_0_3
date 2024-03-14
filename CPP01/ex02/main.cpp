#include <iostream>
#include <string>

int main()
{
    std::string  str;
    std::string  *PTR;
    std::string  &REF = str;

    str = "HI THIS IS BRAIN";
    PTR = &str;

    std::string << "\033[0;34mprint The memory address\033[0m" << std::endl;
    std::string << &str << std::endl;
    std::string << PTR << std::endl;
    std::string << &REF << std::endl;
    std::string << "\033[0;33mprint The value\033[0m" << std::endl;
    std::string << str << std::endl;
    std::string << *PTR << std::endl;
    std::string << REF << std::endl;
}
