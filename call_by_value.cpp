#include <iostream>
using namespace std;

// BY DEFAULT C++ USES CALL BY VALUE


// IN CALL BY VALUE CHANGES MADE TO THE PARAMETERS INSIDE A FUNCTION HAVE NO EFFECT ON THE ACTUAL ARGUMENTS WHICH MEANS THAT THE CHANGES IN THE PARAMETERS INSIDE A FUNCTION DOES NOT CHANGES THE ACTUAL VALUES THAT WERE USED TO CALL THE FUNCTION


void swap(int a , int b){

    // THIS FUNCTION WILL SWAP THE VALUES WITH EACH OTHER

    int temp = a;

    b = temp;

    a = b;
}


int main(){

    int a = 100;
    int b = 200;


    cout << "Value before swapping a = " << a << " , b = " << b << "\n";
    
    swap(a , b);

    cout << "Values after swapping a = " << a << " , b = " << b;


    // AS YOU CAN SEE THE ORIGINAL VALUE REMAINED THE SAME

    return 0;
}