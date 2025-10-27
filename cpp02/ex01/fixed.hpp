#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
    private:
        int fixed;
        static const int fraction;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int fixed);
        Fixed(const float fixed);
        Fixed &operator=(const Fixed &copy);
        ~Fixed();
    
    int getRawBits( void ) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};
    std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif