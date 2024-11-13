#include <iostream>
using namespace std;

// PROTOTYPE DECLARATION
void swapv (int , int); // CALL BY VALUE
void swapr (int & , int &); // CALL BY REFERENCE
void swapa (int * , int *); // CALL BY ADDRESS


int main(){

    int a = 23;

    int *a_pointer = &a;

    /*
        *a_pointer = pointer variable (Pointer variables are used to store the address of other variables);
    */

    cout << a_pointer ; //THIS WILL PRINT THE ADDRESS OF a

    cout << endl << *a_pointer;




   *a_pointer = 30;

    cout << endl << a_pointer ; //THIS WILL PRINT THE ADDRESS OF a

    cout << endl << *a_pointer;

    cout << endl << a;


    int &b = a; // THIS WILL ALSO STORE THE ADDRESS OF a ( HERE b IS CALLED THE REFERENCE OF A )

    cout << endl << "The value of b =" << b;

    b = 40;

    cout << endl << "Changing the value of b to 40";

    cout << endl << "The value of a=" << a;

    cout << endl << "The value of *a_pointer =" << *a_pointer;

    cout << endl << "The value of b=" << b;


    return 0;
}