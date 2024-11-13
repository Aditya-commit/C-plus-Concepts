#include <iostream>
using namespace std;

class Sample{

    protected:
        int age;

    Sample();

    virtual void displayAge(void) = 0; // THIS IS PURE VIRTUAL FUNCTON
};

/*
-------------------------------------------------------------------------------------------------

class Derived:public Sample{

    // NOW THIS CLASS ACT AS ABSTRACT CLASS BECAUSE WE DIDN'T OVERRIDE THE displayAge VIRTUAL FUNCTION OF THE BASE CLASS AND DUE TO BEING THE ABSTARCT CLASS WE CAN'T CREATE THE OBJECT OF THIS DERIVED CLASS

    public:
        void displayMyAge(void){
            cout << "My age is = " << age;
        }
};
-------------------------------------------------------------------------------------------------*/

class Derived:public Sample{

    public:
        void displayAge(void){
            cout << "My age is = " << age;
        }
};

Sample::Sample(){
    age=22;
}

int main(){

    Derived obj;

    // obj.displayMyAge();
    obj.displayAge();

    return 0;
}