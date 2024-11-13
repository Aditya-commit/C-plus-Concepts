#include <iostream>
#include <string>

using namespace std;

class User{


    public:

        string name;
        int age;
        static string category; // EVERY OBJECT OF THIS CLASS WILL HOLD THE SAME VALUE OF category

        static void greetCoder(void);
};


string User::category = "admin";
void User::greetCoder(void){
    cout << "Happy Coding :-)";
}


int main(){

    User aditya , aman;

    aditya.name = "Aditya Singh Tomar";
    aditya.age = 22;

    aman.name = "Aman Deep Singh";
    aman.age = 23;

    cout << "My name is " << aditya.name << " and my age is " << aditya.age << endl;
    cout << "My name is " << aman.name << " and my age is " << aman.age;


    cout << "\n" << User::category << "\n" << User::category << "\n";

    User::greetCoder();

    return 0;
}