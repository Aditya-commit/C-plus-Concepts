#include <iostream>
using namespace std;


int main(){

    int a = 23;

    int &b = a; // THIS MEANS THAT b IS ACTUALLY a (BOTH ARE PRESNT IN THE SAME MEMORY LOCATION)

    cout << "a = " << a << endl << "b = " << b <<endl;

    b = 43; // NOW SINCE b AND a BOTH ARE THE SAME VARIABLE AND PRESENT AT THE SAME MEMORY LOCATION SO ANY CHANGE MADE TO THE b WILL BE SAME AS CHANGES MADE TO a

    cout << "a = " << a << endl << "b = " << b << endl;

    const int &c = a;

    cout << " a = " << a << endl << "c = " << c << endl;

    a = 34; // WE CAN CHANGE THE VALUE OF a CAUSE a IS NOT A CONSTANT INTEGER

    cout << "a =  " << a << endl << "b = " << b << "c = " << c << endl;

    // c = 54; => WE CAN'T DO THIS BECAUSE c IS A CONSTANT WHICH WILL GIVE US ERROR (READ ONLY VARIABLE)


    return 0;
}