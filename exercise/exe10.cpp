#include <iostream>
using namespace std;

int main(){

    // char *p = "hello"; THIS WILL NOT WORK

    const char *p = "Hello";

    cout << *p << endl << *(p+1);
    cout << endl << &p; // THIS WILL RETURN THE ADDRESS OF THE p
    return 0;
}