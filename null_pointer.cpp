#include <iostream>
using namespace std;


int main(){

    int *p = NULL;

    cout << "The address stored in the null pointer is = " << p << " and the value is = " << endl;
    cout << "This means that this memory is only accessible by the operating system only and cannot be accessed by other programs\n";

    // PRINTING THE VALUE OF THE POINTER CAUSES THE UNEXPECTED BEHAVIOUR IN THE PROGRAM


    // CHECKING IF THE POINTER IS NULL OR NOT


    if(!p){
        cout << "The pointer is a NULL pointer";
    }
    else{
        cout << "The pointer is not a NULL pointer";
    }

    return 0;
}