#include "Point.hpp"

Point::Point() : x(0) , y(0)
{
}

Point::~Point()
{
}

Point::Point(const Point& fix)
{
    *this = fix;
}

Point::Point(Fixed const x, Fixed const y) : x(x) , y(y)
{
}

Fixed Point::getx() const
{
    return (this->x);
}

Fixed Point::gety() const
{
    return (this->y);
}

Point&   Point::operator=(const Point& other)
{
    (void)other;
    return (*this);
}
