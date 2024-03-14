#include "Point.hpp"

int main()
{
    std::cout << std::boolalpha;
    std::cout << bsp(Point(0, 0), Point(4,0), Point(0, 4), Point(1, 2)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4,0), Point(0, 4), Point(0, 2)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4,0), Point(0, 4), Point(0, 4)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4,0), Point(0, 4), Point(1, 3)) << std::endl;
}
