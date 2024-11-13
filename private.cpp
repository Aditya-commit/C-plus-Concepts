#include <iostream>
#include <string>
using namespace std;


class User{

    int age;

    public:

        string name;

        void setAge(int val){

            age = val;
        }

        void printAge(void){

            cout << "The age is " << age;
        }
};


int main(){

    User aditya; // DEFINING THE OBJECT OF CLASS User

    aditya.name = "Aditya Singh Tomar";

    cout << aditya.name << "\n";

    // aditya.age = 23; // THIS LINE WILL GIVE ERROR AS AGE IF PRIVATE MEMBER OF CLASS User

    aditya.setAge(22);
    aditya.printAge();
    
    return 0;
}