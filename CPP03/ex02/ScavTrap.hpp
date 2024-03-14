#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
        std::string sca_name;
    public :
        ScavTrap(std::string name);
        ~ScavTrap();
        void    guardGate();
        void    attack(const std::string& target);
};




#endif
