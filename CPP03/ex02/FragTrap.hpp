#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        std::string frag_name;
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void    highFivesGuys();
};


#endif
