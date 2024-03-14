#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

class Zombie
{
    private :
        std::string _name;
    public :
        void        announce();
        void        set_name(std::string name);
        std::string get_name();
        Zombie();
        ~Zombie();
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
