#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class Harl
{
    private:
        void    debug();
        void    info();
        void    warning();
        void    error();
    public:
        void    complain(std::string level);
        Harl();
        ~Harl();
};

typedef void (Harl::*p_ft)();

#endif
