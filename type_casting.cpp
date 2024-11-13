#include <iostream>

using namespace std;

int main(){

    int a= 23;
    float b= 23.34;

    char c = '2'; // ON TYPECASTING THIS YOU WILL GET THE ASCII VALUE OF '2'

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n";


    cout << "After Typecasting \n";

    cout << "a = " << float(a) << "\n";
    cout << "b = " << int(b) << "\n";
    cout << "c = " << int(c) << " (Note : This will return the ascii value of '2')\n";
    cout << "c = " << int(c - '0');
    return 0;
}