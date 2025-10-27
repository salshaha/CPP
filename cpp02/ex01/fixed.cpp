#include "fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed = copy.fixed;
}


Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    this->fixed = copy.fixed;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed = raw;
}

Fixed::Fixed(const int fixed)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed = fixed * (1 << fraction);
}

Fixed::Fixed(const float fixed)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed = roundf(fixed * (1 << fraction));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixed / (1 << fraction));
}

int Fixed::toInt( void ) const
{
    return this->fixed >> fraction;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
    out << value.toFloat();
    return out;
}