#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

// using namespace std;

class Fixed
{
    private:
        int fp_nb;
        static const int store;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &copy);
        Fixed(const int nb);
        Fixed(const float nb);
        //get_set
        int     getRawBits(void) const;
        //methods convert_to
        float   toFloat(void) const;
        int     toInt(void) const;
        //operator =
        Fixed&  operator=(const Fixed& other);
        //operator incrimentation
        Fixed   operator++();
        Fixed   operator++(int);
        //operator decrimentation
        Fixed   operator--();
        Fixed   operator--(int);
        //operator +, -, *, and /
        Fixed   operator+(const Fixed& other) const;
        Fixed   operator-(const Fixed& other) const;
        Fixed   operator*(const Fixed& other) const;
        Fixed   operator/(const Fixed& other) const;
        //operator >, <, >=, <=, == and !=
        bool    operator<(const Fixed&) const;
        bool    operator>(const Fixed&) const;
        bool    operator>=(const Fixed&) const;
        bool    operator<=(const Fixed&) const;
        bool    operator==(const Fixed&) const;
        bool    operator!=(const Fixed&) const;
        //MAX object
        static Fixed&  max(Fixed& fix1, Fixed& fix2);
        static const Fixed&  max(const Fixed& fix1, const Fixed& fix2);
        //MIN object
        static Fixed&  min(Fixed& fix1, Fixed& fix2);
        static const Fixed&  min(const Fixed& fix1, const Fixed& fix2);
};

std::ostream&    operator<<(std::ostream& os, const Fixed& fixed);


#endif
