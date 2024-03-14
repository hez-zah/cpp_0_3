#include "Point.hpp"

bool    line_p_aid(Point const *f1, Point const *f2, Point const *f3)
{
    if ((f2->getx().getRawBits() - f1->getx().getRawBits())
    * (f3->gety().getRawBits() - f2->gety().getRawBits())
    - (f2->gety().getRawBits() - f1->gety().getRawBits()) 
    * (f3->getx().getRawBits() - f1->getx().getRawBits()) == 0)
        return (0);
    return (1);
}

bool    line_p(Point const *f1, Point const *f2, Point const *f3, Point const *P)
{
    bool s[3];

    s[0] = line_p_aid(f1,f2,P);
    s[1] = line_p_aid(f1,f3,P);
    s[2] = line_p_aid(f2,f3,P);
    return (s[0] && s[1] && s[2]);
}

double  area(Point const *A, Point const *B, Point const *C)
{
    return (abs((A->getx().getRawBits() * (B->gety().getRawBits() - C->gety().getRawBits())
    + B->getx().getRawBits() * (C->gety().getRawBits() - A->gety().getRawBits())
    + C->getx().getRawBits() * (A->gety().getRawBits() - B->gety().getRawBits()))/2.0)); 
}

bool    bsp(Point const a, Point const b, Point const c, Point const P)
{
    float S = area(&a, &b, &c);
    float S1 = area(&a, &b, &P); 
    float S2 = area(&a, &c, &P); 
    float S3 = area(&b, &c, &P);
    bool line = line_p(&a, &b, &c, &P);
    return ((S == (S1 + S2 + S3)) && line);
}
