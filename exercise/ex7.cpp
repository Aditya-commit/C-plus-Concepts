#include <iostream>
using namespace std;

int main(){
    int i=10;
    int &j = i;
    int &k = j;
    int &l = i;
    cout << i << j << k << endl;
    return 0;
}