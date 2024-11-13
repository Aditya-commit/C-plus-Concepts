#include <iostream>
#include <string>
using namespace std;



int main(){

    struct user
    {
        string name;
        int age;
        string address;
    };

    user aditya , ishu , aman;

    aditya.name = "Aditya Singh Tomar";
    aditya.age = 22;
    aditya.address = "Saket Nagar Sarojini Nagar Lucknow";


    ishu.name = "Ishu Singh Tomar";
    ishu.age = 22;
    ishu.address = "Saket Nagar Sarojini Nagar Lucknow";

    cout << "Full name of aditya is = " << aditya.name << "\n";
    cout << "Full name of ishu is = " << ishu.name << "\n";

    cout << "Age of aditya is = " << aditya.age << "\n";
    cout << "Age of ishu is = " << ishu.age;

    return 0;
    
}