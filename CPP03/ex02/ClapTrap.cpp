#include "ClapTrap.hpp"

//constructor
ClapTrap::ClapTrap():name(""),hit_p(10),energy_p(10),at_dmg(0)
{
    std::cout << "Called ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name),hit_p(10),energy_p(10),at_dmg(0)
{
    std::cout << "Called ClapTrap Constructor" << std::endl;
}

//Deconstructor
ClapTrap::~ClapTrap()
{
    std::cout << "Called ClapTrap Deconstructor" << std::endl;
}

// member fonctions 
void    ClapTrap::attack(const std::string& target)
{
    if (this->hit_p && this->energy_p)
    {
        this->energy_p--;
        std::cout << CYAN << "ClapTrap " << this->name << " attacks "
        << target << ", causing " << this->at_dmg
        << " points of damage!" << RESET << std::endl;
    }
    else
        std::cout << YELLOW << "ClapTrap " << this->name << "can't attack "
        << "be couse energy point or hit point is expected" << RESET << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->hit_p)
    {
        std::cout << BRED << "ClapTrap " << this->name << " is dead....." << RESET << std::endl;
        return ;
    }
    this->hit_p > amount ? this->hit_p -= amount : this->hit_p = 0;
    std::cout << "ClapTrap " << this->name << " lose " << amount << " hit point "
    "now has " << BLUE << this->hit_p  << " hit point " << RESET << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->hit_p || !this->energy_p)
    {
        std::cout << YELLOW << "ClapTrap " << this->name 
        << " can't repairs itself "
        << "cousing energy point or hit point is expected" << RESET << std::endl;
        return ;
    }
    this->hit_p += amount;
    this->energy_p--;
    std::cout << RED << "ClapTrap " << this->name << " Add him self " << amount << " hit point to repairs itself" << RESET << std::endl;
}

//seter
void    ClapTrap::sethit_p(unsigned int hit)
{
    this->hit_p = hit;
}

void    ClapTrap::setenergy_p(unsigned int energ)
{
    this->energy_p = energ;
}

void    ClapTrap::setat_dmg(unsigned int dmg)
{
    this->at_dmg = dmg;
}

//geter
unsigned int ClapTrap::gethit_p()
{
    return (this->hit_p);
}

unsigned int ClapTrap::getenergy_p()
{
    return (this->energy_p);
}

unsigned int ClapTrap::getat_dmg()
{
    return (this->energy_p);
}
