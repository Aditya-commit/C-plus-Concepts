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

        virtual void checkFuncCall(void){ cout << "This func call is from base class" << endl ; }
};

class Derived:public Base{

    public:
        void displayGreeting(void){
            cout << "Hello from Derived class" << endl;
        }

        void checkFuncCall(void) override { cout << "This func call is from Derived class" << endl; }
};

class Derived1:public Base{

    public:

        void displayGreeting(void){
            cout << "Hello from Derived 1 class" << endl;
        }

        void checkFuncCall(void) override { cout << "This func call is from Derived1 class" << endl; }
};


int main(){

    Base *base_obj;

    base_obj = new Derived();
    base_obj->checkFuncCall(); // SINCE THIS IS VIRTUAL FUNCTION , SO THE METHOD OF THE OBJECT TO WHICH THE POINTER IS POINTER TO WILL BE CALLED
    base_obj->displayGreeting(); // SINCE THIS IS NON VIRTUAL FUNCTION , SO THE METHOD OF THE TYPE WHICH IS USED FOR POINTER , THE METHOD OF THAT CLASS IS USED

    return 0;
}