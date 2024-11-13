#include <iostream>
using namespace std;


// POLYMORPHISM = HAVING MANY FORMS

/*
    Here displayGreeting() has many forms that is having many definitions means the selection of the function that will be executed depends on the type of object that is calling that function
*/



class Base{

    public:

        void displayGreeting(void){
            cout << "Hello from Base class" << endl;
        }
};

class Derived:public Base{

    public:
        void displayGreeting(void){
            cout << "Hello from Derived class" << endl;
        }
};

class Derived1:public Base{

    public:

        void displayGreeting(void){
            cout << "Hello from Derived 1 class" << endl;
        }
};


int main(){

    Derived obj;

    obj.displayGreeting();

    return 0;
}