#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define BRED "\033[1;31m"
# define RESET "\033[0m"

class ClapTrap
{
    private:
        const std::string name;// name ClapTrap
        unsigned int hit_p;//Hit points
        unsigned int energy_p;//Energy points
        unsigned int at_dmg;//Attack damage
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        //seter
        void    sethit_p(unsigned int hit);
        void    setenergy_p(unsigned int energ);
        void    setat_dmg(unsigned int energ);
        //geter
        unsigned int gethit_p();
        unsigned int getenergy_p();
        unsigned int getat_dmg();
};



#endif
