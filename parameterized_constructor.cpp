#include <iostream>
using namespace std;



class User{

    public:

        string name;
        
        void printAge(void); // FUNCTION DECLARATION

        User(int val){

            age = val;
        }

    int age; // PRIVATE MEMBER
};

// FUNCTION DEFINITION
void User::printAge(void){
    cout << "The age is " << age;
};




int main(){

    User aditya(23);

    aditya.printAge();

    return 0;
}