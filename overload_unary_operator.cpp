#include <iostream>
using namespace std;

class UnaryOperatorOverload{

    private :
        int counter = 0;

    public:
        void operator++(){
            ++counter;
        }

        void operator++(int){
            // HERE WE ARE USING int ARGUMENT JUST TO TELL THE COMPILER THAT THIS IS FOR  <object>++ AND NOTHING ELSE . THIS IS JUST TO MAKE THE DIFFERENCE FOR THE COMPILER BETWEEN <object>++ and ++<object>
            counter ++;
            cout << "Return previous increment later" << endl;
        }

        void displayCounter(){
            cout << "counter = " << counter << endl;
        }
};

int main(){

    UnaryOperatorOverload a , b , c;

    a.displayCounter();
    ++a;
    a.displayCounter();

    a++;
    a.displayCounter();

    return 0;
}