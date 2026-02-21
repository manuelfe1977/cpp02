#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment called" << std::endl;
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
