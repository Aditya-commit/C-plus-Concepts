#include <iostream>
#include <deque>
using namespace std;


int main(){

    deque<int> d;
    deque<int> d2 (4 , 3);

    cout << d.size() << endl << d2.size() << endl;

    cout << d2.front() << endl;

    cout << d2.back() << endl;

    for(int val : d2){
        cout << val << " ";
    }

    cout << endl;

    return 0;
}