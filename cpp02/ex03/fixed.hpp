#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

#define FALSE 0
#define TRUE 1

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
    bool operator>(const Fixed &copy);
    bool operator<(const Fixed &copy);
    bool operator<=(const Fixed &copy);
    bool operator>=(const Fixed &copy);
    bool operator==(const Fixed &copy);
    bool operator!=(const Fixed &copy);
    Fixed operator+(const Fixed &copy);
    Fixed operator-(const Fixed &copy);
    Fixed operator/(const Fixed &copy);
    Fixed operator*(const Fixed &copy);
    Fixed&	operator++();
    Fixed&	operator--();
    Fixed operator--(int);
    Fixed operator++(int);
    static const Fixed&	min(const Fixed& num1, const Fixed& num2);
    static const Fixed&	max(const Fixed& num1, const Fixed& num2);
    static Fixed&	min(Fixed& num1, Fixed& num2);
    static Fixed&	max(Fixed& num1, Fixed& num2);
};
    std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif