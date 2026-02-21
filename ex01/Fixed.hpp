
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <math.h>

class Fixed
{
private:
	int					_value;
	static const int	_literal = 8;
public:
	Fixed();

	Fixed(const Fixed &fixed);

	Fixed(const int value);

	Fixed(const float number);

	Fixed &operator=(const Fixed &fixed);

	~Fixed();

	int		getRawBits(void) const;

	void	setRawBits(int const raw);

	float	toFloat(void) const;

	int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif
