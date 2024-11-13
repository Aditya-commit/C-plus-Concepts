#include <iostream>
using namespace std;


int main(){

    int a= 23;

    int *p = &a;

    cout << *p << endl; // THIS WILL PRINT THE VALUE STORED IN POINTER P

    cout << p << endl; // THIS WILL PRINT THE ADDRESS STORED IN POINTER P

    int b = 22;

    int &p1 = b;

    cout << b;

    return 0;
}