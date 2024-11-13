#include <iostream>
#include <string>
using namespace std;


struct user{
    string name;
    int age;
    int rollno;
};

// HERE user ACTS A DATATYPE


void printUserDetails(struct user User){

    // HERE THE STRUCT IS PASSED AS A CALL BY VALUE SO ANY CHANGE MADE IN THIS FUNCTION WILL NOT CHANGE THE ACTUAL VALUE

    cout << User.name << "\n";
    cout << User.age << "\n";
    cout << User.rollno << "\n";

    User.name = "aman"; // THIS WILL NOT CHANGE THE ACTUAL VALUE
}


int main(){

    user aditya , ishu;

    aditya.name = "Aditya Singh Tomar";
    aditya.age = 22;
    aditya.rollno = 4;


    ishu.name = "Ishu Singh Tomar";
    ishu.age = 22;
    ishu.rollno = 24;


    // PRINTING THE DETAILS OF THE USERS
    printUserDetails(aditya);
    printUserDetails(ishu);

    cout << ishu.name;
}