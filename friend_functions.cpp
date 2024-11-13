#include <iostream>
#include <string>
using namespace std;


class User{

    int age ; // PRIVATE MEMBER

    public:

        string name;

        friend void displayAge(User user); // FUNCTION DECLARATION

        User(int val); // PARAMETERIZED CONSTRUCTOR
};

User::User(int val){

    // CONSTRUCTOR LOGIC

    age = val;
}

// NOTE: THIS IS NOT A MEMEBER FUNCTION
void displayAge(User user){

    // FUNCTION DEFINITION
    cout << "The age is " << user.age;
}


int main(){

    User aditya(21);

    aditya.name = "Aditya Singh Tomar";

    cout << "My name is " << aditya.name << " and my age is ";
    displayAge(aditya);

    return 0;
}