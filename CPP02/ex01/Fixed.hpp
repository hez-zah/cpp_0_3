#ifndef FIXED_HPP
# define FIXED_HPP


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int fp_nb;
        static const int store;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fix);
        Fixed& operator=(const Fixed &fix);
        Fixed(const int nb);
        Fixed(const float nb);
        void    setRawBits(int const raw);
        int     getRawBits(void) const;
        int     getstore(void) const;
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream&    operator<<(std::ostream& os, const Fixed& fixed);

#endif
