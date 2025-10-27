#include "point.hpp"

int main()
{
    point a(0, 0);
    point b(10, 0);
    point c(0, 10);
    point p(3, 3);

    if (bsp(a, b, c, p))
        std::cout << "Inside the triangle ✅" << std::endl;
    else
        std::cout << "Outside the triangle ❌" << std::endl;

    return 0;
}