#include <iostream>
using namespace std;


template <typename T>
void func(T a){
    cout << "This is the template function" << endl;
};

void func(int a){
    cout << "This template function is overriden for integer types only" << endl;
};

int main(){

    func(23);
    func<char>('c');
    func(34.4f);

    return 0;
}