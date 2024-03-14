#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

class Fixed
{
    private:
        float fp_nb;
        static const int store;
    public:
        Fixed();
        Fixed(const Fixed &fix);
        Fixed&  operator=(const Fixed& other);
        ~Fixed();
        void    setRawBits(int const raw);
        int     getRawBits(void) const;
};



# endif
