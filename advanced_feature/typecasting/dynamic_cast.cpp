#include <iostream>
using namespace std;


class Base{

    private:
        int age;

    public:

        Base(int age){
            this->age = age;
        }
        void getFunc(void){
            cout << "this is a base class" <<endl;
        }

        virtual ~Base(){}
};

class Derived:public Base{

    public:

        Derived(int age) : Base(age){}

        void getFunc(void){
            cout << "This is Derived Class" << endl;
        }
};


class Unique{

};



int main(void){

    Base *b = new Derived(20);

    b->getFunc(); // THIS WILL CALL THE BASE CLASS getFunc()

    Derived *d = dynamic_cast<Derived*>(b); // THIS IS VALID CAST BECUASE THERE IS A INHERITANCE (HERIEACHY) RELATION BETWEEN THEM

    Unique *u = dynamic_cast<Unique*>(b); // THIS IS INVALID BECAUSE THERE IS NO INHERITANCE RELATION BETWEEN THEM

    cout << "Entering the object type " << typeid(*d).name() << endl;

    if(u){

        d->getFunc();
    }
    else{
        cout << "Invalid cast" << endl;
    }

    return 0;
}