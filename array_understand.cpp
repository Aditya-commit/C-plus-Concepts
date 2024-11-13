#include <iostream>
using namespace std;



int main(){

    int arr[] = {23 , 43 ,12};


    cout << arr << endl;

    // INT TAKES 4 BYTES OF MEMORY . NOW THERE ARE 3 INTEGERS STORED IN THE ARRAY SO TOTAL MEMORY TAKEN BY THE arr WILL BE 4*3

    //NOW TO GET THE NUMBER OF ELEMENTS PRESENT IN THE ARRAY WE CAN DIVIDE THE TOTAL SIZE OF THE ARRAY WITH THE SIZE OF THE FIRST ARRAY ELEMENT'S SIZE (12/4)

    cout << "Total size of array is " << sizeof(arr) << endl;

    cout << "The size of each element of array is " << sizeof(arr[0]) << endl;

    cout << "Total number of elements present in the array are " << sizeof(arr)/sizeof(arr[0]);







    // ----------------------------------------------------------------------------------------

    cout << endl << "Memory address of first element " << &arr[0];
    cout << endl << "Memory address of second element " << &arr[1];


    // FROM THIS WE CAN UNDERSTAND THAT ARRAYS STORES THE ADDRESS OF THE ELEMENTS JUST LIKE POINTERS



    cout << endl << "The address of arr " << &arr; // THIS RETURNS THE ADDRESS OF THE ENTIRE ARRAY
    cout << endl << "The address of first element of arr " << arr; // THIS RETURNS THE ADDRESS OF THE FIRST ELEMENT OF THE ARRAY (BOTH OF THEIR VALUE WILL BE SAME)




    /* ACCESSING THE ELEMENTS USING POINTER NOTATION */

    cout << endl << "The first element using *arr " << *arr;
    cout << endl << "The second element using *arr " << *(arr + 1);


    return 0;
}