#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "--- Pruebas de Sujeto (ex02) ---" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "\n--- Pruebas Aritméticas ---" << std::endl;
    Fixed c(10);
    Fixed d(2.5f);
    std::cout << "c: " << c << " | d: " << d << std::endl;
    std::cout << "Suma (c + d): " << (c + d) << std::endl;
    std::cout << "Resta (c - d): " << (c - d) << std::endl;
    std::cout << "Mult (c * d): " << (c * d) << std::endl;
    std::cout << "Div (c / d):  " << (c / d) << std::endl;

    std::cout << "\n--- Pruebas de Comparación ---" << std::endl;
    std::cout << "c > d:  " << (c > d) << std::endl;
    std::cout << "c < d:  " << (c < d) << std::endl;
    std::cout << "c == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;

    std::cout << "\n--- Pruebas Min/Max ---" << std::endl;
    Fixed const e(42.42f);
    Fixed const f(21.21f);
    std::cout << "Const min(e, f): " << Fixed::min(e, f) << std::endl;
    std::cout << "Non-const max(c, d): " << Fixed::max(c, d) << std::endl;
	return 0;
}
