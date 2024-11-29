#include <iostream>
using namespace std;



int main(){

    char str[100];

    // cin >> str;
    
    // cin.get(str , 50);

    cin.getline(str , 50);

    for(int i = 0 ; i< 100 ; i++){
        cout << str[i];
    }

    return 0;
}