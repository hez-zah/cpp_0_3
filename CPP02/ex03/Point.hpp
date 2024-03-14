#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        ~Point();
        Point(const Point& fix);
        Point(Fixed const x, Fixed const y);
        Point&  operator=(const Point& other);
        //get_set
        Fixed getx() const;
        Fixed gety() const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif
