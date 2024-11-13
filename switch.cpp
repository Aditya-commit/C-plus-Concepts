#include <iostream>
using namespace std;

int main(){

    char name = 'a';

    // SWITCH CASES IN C++ DO NOT WORK WITH STRING TYPES

    switch(name){
        case 'a':
            cout << "Condition found";
            break;

        case 'b':
            cout << "Second condition found";
            break;
    }

    return 0;
}