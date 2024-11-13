#include <iostream>
using namespace std;

int i = 20;

int main(){

    int i=5;
    cout << i << endl << ::i << endl;

    {
        int i=10;
        cout << i << endl << ::i << endl;
    }

    return 0;
}