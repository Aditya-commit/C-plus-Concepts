#include <iostream>
using namespace std;


int * getRandom(){

    static int r[10];

    srand( (unsigned)time(NULL));

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