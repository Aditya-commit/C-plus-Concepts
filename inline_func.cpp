#include <iostream>
#include <string>
using namespace std;



inline int add(int x , int y){

    // INLINE FUNCTION

    return x+y;
}



int main(){


    int a = 10 , b = 20;

    cout << "The addition of a and b is " << add(a , b);

    return 0;
}