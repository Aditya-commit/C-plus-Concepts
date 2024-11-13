#include <iostream>
using namespace std;

// int main(){

//     cout << "size of int is " << sizeof(int) << "\n";
//     cout << "size of int is " << sizeof(short int)  << "\n";
//     cout << "size of signed int is " << sizeof(signed int);

//     return 0;
// }



// ANOTHER EXAMPLE

#include <limits>

int main() {

    std::cout << "Int Min " << std::numeric_limits<int>::min() << endl;
    std::cout << "Int Max " << std::numeric_limits<int>::max() << endl;
    std::cout << "Unsigned Int  Min " << std::numeric_limits<unsigned int>::min() << endl;
    std::cout << "Unsigned Int Max " << std::numeric_limits<unsigned int>::max() << endl;
    std::cout << "Long Int Min " << std::numeric_limits<long int>::min() << endl;
    std::cout << "Long Int Max " << std::numeric_limits<long int>::max() << endl;

    std::cout << "Unsigned Long Int Min " << std::numeric_limits<unsigned  long int>::min() <<endl;
    std::cout << "Unsigned Long Int Max " << std::numeric_limits<unsigned  long int>::max() << endl;

}