#include <iostream>
#include <string>
using namespace std;

struct emp {
    string name;
    int age;
};

emp e1 = { "Ishu" , 23 };
emp e2 = { "Aditya" , 24 };
emp &fun();

int main(){

    fun() = e2;

    cout << e1.name << " " << e1.age << endl;

    return 0;
}

emp &fun(){

    cout << e1.name << " " << e1.age << endl;

    return e1;
}


/*
    When a function returns a reference , the function call can exist in any context where a reference can exist , including on the left hand side of an assignment.

    NOTE : Never return a local variable by reference
    ----
*/