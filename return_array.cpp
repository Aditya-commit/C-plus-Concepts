#include <iostream>
using namespace std;


int * getRandom(){

    static int r[10]; // HERE WE ARE USING STATIC VARIABLE DUE TO WHICH THE ISSUE ABOUT NOT RETURNING THE LOCAL VARIABLE IS NO LONGER APPLICABLE BECAUSE STATIC VARIABLE REMAINS FOR THE LIFETIME OF THE PROGRAM AT A SPECIAL PLACE IN THE MEMORY

    srand((unsigned)time(NULL));

    for(int i = 0 ; i < 10 ; ++i){
        r[i] = i+10;
    }

    return r;
}


int main(){

    int *p;

    p = getRandom();

    // cout << "Size of p is = " << sizeof(p)/sizeof(*p+0) << endl;

    for(int i = 0; i < 10 ; i++){
        cout << *(p + i) << endl;
    }
}