#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

std::string Contact::getFirst_name(void) const
{
    return (first_name);
}

std::string Contact::getLast_name(void) const
{
    return (last_name);
}

std::string Contact::getNickname(void) const
{
    return (nickname);
}

std::string Contact::getPhone_number(void) const
{
    return (phone_number);
}

std::string Contact::getDarkest_secret(void) const
{
    return (darkest_secret);
}

void	Contact::setFirst_name( std::string first_name )
{
    this->first_name = first_name;
}

void	Contact::setLast_name( std::string last_name )
{
    this->last_name = last_name;
}

void	Contact::setNickname( std::string nickname )
{
    this->nickname = nickname;
}

void	Contact::setPhone_number( std::string phone_number )
{
    this->phone_number = phone_number;
}

void	Contact::setDarkest_secret( std::string darkest_secret )
{
    this->darkest_secret = darkest_secret;
}
