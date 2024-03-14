#include "Fixed.hpp"

const int Fixed::store = 8;

Fixed::Fixed() :fp_nb(0)
{
    std::cout << "Default constructor called " << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fp_nb = fix.getRawBits();
}

Fixed&  Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fp_nb = other.getRawBits();
    return (*this);
}

void    Fixed::setRawBits(int const raw)
{
    this->fp_nb = raw;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp_nb);
}
