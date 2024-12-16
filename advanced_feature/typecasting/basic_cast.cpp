#include <iostream>
using namespace std;



int main(){

    char ch = '2';

    int age = int(ch);

    cout << typeid(age).name() << endl;

    cout << age << endl;

    return 0;
}