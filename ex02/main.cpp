#include "Fixed.hpp"

int main(void)
{
 Fixed a;
 Fixed const b(Fixed(5.05f) * Fixed(2));
 std::cout << "a is " << a << std::endl;
 std::cout << "++a is " << ++a << std::endl;
 std::cout << "a is " << a << std::endl;
 std::cout << "a++ is " << a++ << std::endl;
 std::cout << "a is " << a << std::endl;
 std::cout << "b is " << b << std::endl;
 std::cout << "max(a, b) " << Fixed::max(a, b) << std::endl;
 std::cout << "min(a, b) " << Fixed::min(a, b) << std::endl;
 // std::cout << "const min(const a, const b) " << Fixed::min(a, b) << std::endl;
 return 0;
}