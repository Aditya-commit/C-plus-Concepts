#include <iostream>
#include <iomanip>

int main() {
    float f = 123.456789f;
    double d = 123.456789;

    std::cout << std::setprecision(9) << "float: " << f << std::endl;  // Outputs: float: 123.456787
    std::cout << std::setprecision(15) << "double: " << d << std::endl; // Outputs: double: 123.456789

    return 0;
}
