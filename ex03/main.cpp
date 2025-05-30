#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

int main( void )
{
    // Create Point objects with x,y coordinates
    Point const a(1.0f, 0.0f);
    Point const b(0.0f, 2.0f);
    Point const c(2.0f, 2.0f);
    
    Point const d(1.0f, 1.0f);   // Test point inside triangle
    Point const e(3.0f, 3.0f);   // Test point outside triangle

    if (bsp(a, b, c, d))
        std::cout << "Point " << d << " is inside the triangle formed by points " << a << ", " << b << ", and " << c << std::endl;
    else
        std::cout << "Point " << d << " is outside the triangle formed by points " << a << ", " << b << ", and " << c << std::endl;
    
    if (bsp(a, b, c, e))
        std::cout << "Point " << e << " is inside the triangle formed by points " << a << ", " << b << ", and " << c << std::endl;
    else
        std::cout << "Point " << e << " is outside the triangle formed by points " << a << ", " << b << ", and " << c << std::endl;

    return 0;
}