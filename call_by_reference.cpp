#include <iostream>
using namespace std;



// IN CALL BY REFERENCE WE PASS THE REFERENCE OF THE ARGUMENT IN THE FORMAL PARAMETER WHICH MEANS ANY CHANGE MADE TO THE PARAMETERS INSIDE THE FUNCTION WILL ALSO CHANGE THE ACTUAL VALUE OF THAT ARGUMENT


void swap(int &a , int &b){

    int temp = a;
    
    a = b;

    b = temp;

}



int main(){

    int a = 100;
    int b= 200;

    cout << "Value before swapping a = " << a << " , b = " << b << "\n";

    swap(a , b);

    cout << "Value after swapping a = " << a << " , b = " << b;

    return 0;
}