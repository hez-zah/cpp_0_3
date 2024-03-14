#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    this->frag_name = name;
    sethit_p(100);
    setenergy_p(100);
    setat_dmg(30);
    std::cout << "Called FragTrap Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Called FragTrap Deconstructor" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << std::endl;
}
