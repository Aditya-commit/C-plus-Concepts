#include <iostream>
using namespace std;

// FUNCTION PROTOTYPING ALLOWS THE COMPILER TO GET THE INFORMATION ABOUT THE FUNCTION THAT HAS YET NOT CREATED BUT ONLY ASSIGNED

int sum(int , int);
// OR
// int sum(int a , int b)


int main(){

    cout << sum(23 , 12);

    return 0;
}


int sum(int a , int b){

    return a+b;
}