// THIS FILE IS NOT FOR ARRAY POINTERS


#include <iostream>
using namespace std;


int main(){

    int rollno[] = { 23 , 234 , 123 , 33 ,23 };

    cout << "Size = " << sizeof(rollno)/sizeof(rollno[0]) << "\n";

    for(int i =0 ; i< sizeof(rollno)/sizeof(rollno[0]) ; i++){

        cout << "The value of roolno[" << i << "] is = " << rollno[i] << "\n";
    }
}