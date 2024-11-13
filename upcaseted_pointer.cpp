#include <iostream>
using namespace std;

class Base{

    public:

        virtual void displayMsg(void) = 0;
};

class Derived:public Base{

    public:

        void displayMsg(void){
            cout << "This is the function of Dervied Class" << endl;
        }
};

class Derived1:public Base{

    public:

        void displayMsg(void){
            cout << "This is the function of Dervied1 Class" << endl;
        }
};

int main(){

    Derived obj;
    Derived1 obj1;

    Base *upcasted_pointer; // THIS WILL STORE THE ADDRESS OF THE DERIVED CLASS OBJECT

    upcasted_pointer = &obj;

    obj1.displayMsg();

    upcasted_pointer->displayMsg();

    return 0;
}