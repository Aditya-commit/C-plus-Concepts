#include <iostream>
#include <string>
using namespace std;


class User{

    public:
        
        int age;
        string name;

        User(); // CONSTRUCTOR
};

User::User(void){
    cout << "Object is being created";
}

int main(){

    User aditya;

    cout << aditya.age; // IT WILL PRINT 2 WHICH IS THE BYTES FOR SHORT INT

    return 0;
}