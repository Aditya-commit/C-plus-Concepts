#include <iostream>

int main(){
    
    int a = 23;
    int c = 33;

    std::cout << "Adress of a = " << &a << std::endl;
    std::cout << "Adress of c = " << &c << std::endl;
    
    const int *b = &a;
    
    // *b = 10; error when changing the value (*b)
    
    b = &c;

    std::cout << b << " " << *b << std::endl;
    
    
    return 0;
}