#include <iostream>

using namespace std;


class PrintClass{

    public:

        void printValue(int data){
            cout << "Call int function " << data;
        }

        void printValue(char data){
            cout << "Call char function " << data;
        }

        void printValue(double f){
            cout << "Call double f " << f;
        }
};


int main(){

    PrintClass p1;


    p1.printValue(23); // THIS WILL PICK FIRST FUNCTION
    cout << "\n";

    p1.printValue('3'); // THIS WILL PICK SECOND FUNCTION
    cout << "\n";


    p1.printValue(23.34); // THIS WILL PICK THIRD FUNCTION

    return 0;
}