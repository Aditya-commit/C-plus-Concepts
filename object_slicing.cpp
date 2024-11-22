#include <iostream>
using namespace std;



class Base{

    private:

        int i;

    public:

        Base(int ii){

            // CONSTRUCTOR

            i = ii;
        }

        virtual void func1(void){
            cout << "The base class i = " << i << endl;
        }
};

class Derived : public Base{

    private:
        int j;

    public:

        Derived(int i1 , int j1) : Base(i1){

            j=j1;
        }

        void func1(void){

            Base::func1();
            cout << "The derived class func j = " << j << endl;
        }
};



int main(){


    Base b(10);
    Derived d(29 , 50);


    /* ---------------------------------------
        USING POINTERS
    */
    Base *ptr = &b; // *prt IS AN UPCASTED POINTER
    ptr->func1();

    Base *ptr2 = &d;
    ptr2->func1();

    // ---------------------------------------


    /*---------------------------------------
        USING REFERENCES
    */

   Base &b1 = b;
   Base &d1 = d;

    b1.func1();
    d1.func1();

    // ------------------------------------


    b = d; // OBJECT SLICING

    b.func1();

    return 0;
}