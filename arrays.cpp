#include <iostream>
using namespace std;

int main(){

    // ARRAY DECLARATION

    // double balance[10];


    double balance[] = {1000 , 230 , 24.34 , 34.22};


    for(int i = 0; i < sizeof(balance)/sizeof(balance[0]) ; i++){

        cout << balance[i] << "\n";
    }

    cout << balance[1];

    return 0;
}