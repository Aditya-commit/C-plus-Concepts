#include <iostream>
#include <string>
using namespace std;


struct user{
    string name;
    int age;
    string address;
};

// HERE user ACTS A DATATYPE


void printUserDetails(struct user User){

    // HERE THE STRUCT IS PASSED AS A CALL BY VALUE SO ANY CHANGE MADE IN THIS FUNCTION WILL NOT CHANGE THE ACTUAL VALUE

    cout << User.name << "\n";
    cout << User.age << "\n";
    cout << User.address << "\n";

    User.name = "aman"; // THIS WILL NOT CHANGE THE ACTUAL VALUE
}


int main(){

    user User1;

    cout << "Enter your name : ";
    getline(cin, User1.name);

    cout << "Enter your age : ";
    cin >> User1.age;

    cin.ignore(); // remove leftover newline

    cout << "Enter your address : ";
    getline(cin, User1.address);


    // PRINTING THE DETAILS OF THE USERS
    printUserDetails(User1);

    cout << User1.name;
}