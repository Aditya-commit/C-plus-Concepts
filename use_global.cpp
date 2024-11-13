#include <iostream>
#include <string>

using namespace std;


string name = "ishu";


int main(){

    string name = "aditya";

    cout << "The value of local variable name = " << name;

    cout << "The value of global variable name = " << ::name;

}