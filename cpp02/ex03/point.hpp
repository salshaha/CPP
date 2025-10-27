#ifndef POINT_HPP
#define POINT_HPP

#include "fixed.hpp"

class point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        point();
        point(const float x_new, const float y_new);
        point(const point& copy);
        point &operator=(const point &copy);
        ~point();
        Fixed getX() const;
        Fixed getY() const;
};

bool bsp(point const a, point const b, point const c, point const point);

#endif