#include "point.hpp"

static float area(point const p1, point const p2, point const p3)
{
    return fabs(
        (p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
         p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
         p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2.0f);
}

bool bsp( point const a, point const b, point const c, point const point)
{
    float total = area(a, b, c);
    float a1 = area(point, b, c);
    float a2 = area(a, point, c);
    float a3 = area(a, b, point);

    if (a1 == 0 || a2 == 0 || a3 == 0)
        return false;

    return (a1 + a2 + a3 <= total + 0.0001f);
}