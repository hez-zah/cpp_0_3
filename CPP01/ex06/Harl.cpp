#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "\033[0;33mDEBUG : \033[0;0m";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-";
    std::cout << "triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "\033[0;34mINFO : \033[0;0m";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "\033[0;32mWARNING : \033[0;0m";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
    std::cout << "years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "\033[0;31mERROR : \033[0;0m";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::complain(std::string level)
{
    int     i;
    int     j;
    Harl    h;
    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    p_ft p[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    i = -1;
    j = 0;
    while (++i < 4)
    {
        if (lvl[i] == level || j)
        {
            j = 1;
            (h.*p[i])();
        }
    }
}
