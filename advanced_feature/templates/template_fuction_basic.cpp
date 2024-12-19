#include <iostream>
using namespace std;

template <typename T>
    
T findMax(T a , T b){
    
    return ( a > b) ? a : b;
}

int main(){
    
    cout << endl << findMax(23 , 43);
    cout << endl << findMax(23.23f , 43.3f);
    cout << endl << findMax(23.23l , 343.34l);
    
    return 0;
}