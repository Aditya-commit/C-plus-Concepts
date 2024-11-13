#include <iostream>
using namespace std;


int main(){

    int a = 23;

    // NOW a WILL HAVE SOME ADDRESS WHERE THIS VALUE (23) IS STORED

    int* b = &a; // &a WILL RETURN THE ADDRESS OF a AND TO STORE THE ADDRESS OF VARIABLES WE NEED POINTER DATATYPES

    cout << "b will return the adress = " << b << "\n";

    cout << "*b will return the value at that address which is held by b = " << *b;
}