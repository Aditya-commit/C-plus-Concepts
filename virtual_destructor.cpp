#include <iostream>
using namespace std;



class Base{

    public:
        Base(){
            cout << "in base class constructor" << endl;
        }
        virtual ~Base(){
            cout << "In Base class destructor" << endl;
        }
};

class Derived: public Base{

    public:

        Derived(){
            cout << "In Derived class constructor" << endl;
        }

        ~Derived(){
            cout << "In derived class destructor" << endl;
        }
};



int main(){

    Base *b = new Derived;

    delete b;

    return 0;
}