// HERE WE WILL LEARN THE BEHAVIOUR OF BASE CLASS ZERO ARG CONSTRUCTOR CALL AND EXPLICITLY CALLED BASE CLASS ARG CONSTRUCTOR
#include <iostream>

class Base {

    public:
        int age;

        Base(){
            std::cout << "Zero arg consturctor of Base class" << std::endl;
        }

        Base(int init){
            age = init;
            std::cout << "1 arg constructor of Base class" << std::endl;
        }
};

class Derived : private Base {

    // WE ARE USING PRIVATE INHERITANCE SO THAT THE DERIVED CLASS'S OBJECTS CAN'T DIRECTLY ACCESS/MODIFY THE BASE CLASS MEMBERS

    public:

        Derived(){
            std::cout << "Zero arg constructor of Derived class" << std::endl;
        }

        Derived(int val) : Base(val){
            std::cout << "1 arg constructor of Derived class" << std::endl;
            // NOW IF WE WANT TO RUN 1 ARG CONSTRUCTOR OF BASE CLASS WE HAVE CALL IT EXPLICITLY
        }

        void setAge(int val){
            age = val;
        }

        void printAge(void){
            std::cout << "Age = " << age << std::endl;
        }

};

int main(){

    Derived d , d2(59);

    // d.setAge(24);
    d.printAge();

    d2.printAge();

    return 0;
}