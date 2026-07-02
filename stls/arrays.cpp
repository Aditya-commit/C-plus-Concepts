#include <iostream>
#include <array>

int main(){

    std::array<int , 5> ar = {1 , 2 , 3, 4 , 5}; // MODERN C++ WITH STL FEATURES SUPPORT (SIZE , COMPARISION , BEGIN , END)

    int arr[5] = {1 , 2, 3, 4, 5}; // C-STYLE array

    std::cout << ar.size() << std::endl;
    std::cout << ar.at(3) << std::endl;
    // std::cout << ar.at(12) << std::endl;

    // BEGIN() RETURNS ITERATORS (<type>*) TO THE FIRST ELEMENT IN std::array

    std::cout << *ar.begin() << std::endl;

    int *it = ar.begin(); // will return the address to the first element which will be stored in an int pointer

    std::cout << *it << std::endl;
    std::cout << *(it + 1) << std::endl;
    std::cout << *(it + 2) << std::endl;

    int *it2 = ar.end(); // WILL RETURN THE ONE PAST THE LAST ELEMENT = &ar[5];

    std::cout << *it2 << std::endl;

    std::cout << std::endl;

    for(int *i = ar.begin() ; i != ar.end() ; i++){
        std::cout << *i << std::endl;
    }
    

    // CBEGIN , CEND

    const int *cit = ar.cbegin(); // THIS RETURNS THE CONSTANT ITERATORS(READ ONLY) , CANNOT BE USED FOR MODIFICATIONS , SAME FOR CEND

    std::cout << *cit << std::endl;
    
}

// When to Use Which?
// __________________



// Use std::array if:
// -------------------
// Size is known at compile time.
// You want STL support.
// You want safer code.
// You want assignment and comparison.

// This is the preferred modern C++ approach.

// Use C arrays if:
// ----------------

// Interfacing with old C libraries.
// Working with low-level APIs.
// Embedded systems code where C compatibility matters.



// std::array is essentially a safer, STL-friendly, object-oriented wrapper around a C-style array with almost zero additional runtime cost