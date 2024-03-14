#include "Fixed.hpp"

const int Fixed::store = 8;

Fixed::Fixed() : fp_nb(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
}

Fixed::Fixed(const int nb)
{
    this->fp_nb = nb << this->store;
}

Fixed::Fixed(const float nb)
{
    this->fp_nb = round(nb * pow(2, this->store));
}

float   Fixed::toFloat(void) const
{
    return (static_cast<float>(this->fp_nb) / (pow(2, this->store)));
}//fix to float

int     Fixed::toInt(void) const
{
    return (this->fp_nb >> this->store);
}//fix to int

//get

int     Fixed::getRawBits(void) const
{
    return (this->fp_nb);
}

//operator output

std::ostream&    operator<<(std::ostream& os,const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}

//operator =

Fixed&  Fixed::operator=(const Fixed& other)
{
    this->fp_nb = other.getRawBits();
    return (*this);
}

//operator incrimentation

Fixed  Fixed::operator++()
{
    ++(this->fp_nb);
    return (*this);
}

Fixed  Fixed::operator++(int)
{
    Fixed aid;

    aid.fp_nb = this->fp_nb;
    (this->fp_nb)++;
    return (aid);
}

//operator decrimentation

Fixed  Fixed::operator--()
{
    --(this->fp_nb);
    return (*this);
}

Fixed  Fixed::operator--(int)
{
    (this->fp_nb)--;
    return (*this);
}

//operator +, -, *, and /

Fixed  Fixed::operator+(const Fixed& other) const
{
    Fixed tmp;

    tmp.fp_nb = static_cast<float>(this->fp_nb + other.getRawBits()) / (pow(2, this->store));
    return (tmp);
}

Fixed  Fixed::operator-(const Fixed& other) const
{
    Fixed tmp;

    tmp.fp_nb = static_cast<float>(this->fp_nb - other.getRawBits()) / (pow(2, this->store));
    return (tmp);
}

Fixed  Fixed::operator*(const Fixed& other) const
{
    Fixed tmp;

    tmp.fp_nb = static_cast<float>(this->fp_nb * other.getRawBits()) / (pow(2, this->store));
    return (tmp);
}

Fixed  Fixed::operator/(const Fixed& other) const
{
    Fixed tmp;

    tmp.fp_nb = static_cast<float>(this->fp_nb / other.getRawBits()) / (pow(2, this->store));
    return (tmp);
}

//operator >, <, >=, <=, == and !=

bool    Fixed::operator<(const Fixed& rsh) const
{
    return (this->fp_nb < rsh.getRawBits());
}

bool    Fixed::operator>(const Fixed& rsh) const
{
    return (this->fp_nb > rsh.getRawBits());
}

bool    Fixed::operator<=(const Fixed& rsh) const
{
    return (this->fp_nb <= rsh.getRawBits());
}

bool    Fixed::operator>=(const Fixed& rsh) const
{
    return (this->fp_nb >= rsh.getRawBits());
}

bool    Fixed::operator==(const Fixed& rsh) const
{
    return (this->fp_nb == rsh.getRawBits());
}

bool    Fixed::operator!=(const Fixed& rsh) const
{
    return (this->fp_nb != rsh.getRawBits());
}

//MIN object

Fixed&  Fixed::min(Fixed& fix1, Fixed& fix2)
{
    if (fix1 <= fix2)
        return (fix1);
    return (fix2);
}

const Fixed&  Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1 <= fix2)
        return (fix1);
    return (fix2);
}

//MAX object

Fixed&  Fixed::max(Fixed& fix1, Fixed& fix2)
{
    if (fix1 >= fix2)
        return (fix1);
    return (fix2);
}

const Fixed&  Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1 >= fix2)
        return (fix1);
    return (fix2);
}
