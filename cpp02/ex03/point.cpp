#include "point.hpp"

point::point()
    :x(0) , y(0)
{}

point::point(const float x_new, const float y_new)
    :x(x_new) , y(y_new)
{}

point::point(const point& copy)
    : x(copy.x), y(copy.y)
{}

point &point::operator=(const point &copy)
{
    (void)copy;
    return *this;
}

point::~point()
{}

Fixed point::getX() const 
{
    return x;
}
Fixed point::getY() const
{
    return y;
}