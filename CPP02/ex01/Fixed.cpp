#include "Fixed.hpp"

const int Fixed::store = 8;

Fixed::Fixed() : fp_nb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<  std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fp_nb = fix.getRawBits();
}

Fixed&  Fixed::operator=(const Fixed &other)
{
    this->fp_nb = other.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->fp_nb = nb << this->store;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->fp_nb = round(nb * pow(2, this->store));
}

void    Fixed::setRawBits(int const raw)
{
    this->fp_nb = raw;
}

int     Fixed::getRawBits(void) const
{
    return (this->fp_nb);
}

float   Fixed::toFloat(void) const
{
    return (static_cast<float>(this->fp_nb) / pow(2, this->store));
}

int     Fixed::toInt(void) const
{
    return (this->fp_nb >> this->store);
}

std::ostream&    operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
