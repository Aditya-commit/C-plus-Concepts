#include <iostream>
#include <string>
using namespace std;



class User{

    string firstName;
    string lastName;

    public:

        void setFirstName(string firstName){
            this->firstName = firstName;
        }
        void setLastName(string lastName){
            this->lastName = lastName;
        }
        void displayFirstName(void);
        void displayLastName(void);
        friend void displayFullName(User user);
};

void User::displayFirstName(void){
    cout << firstName;
}
void User::displayLastName(void){
    cout << lastName;
}
void displayFullName(User user){
    cout << user.firstName << " " << user.lastName;
}



int main(){

    User aditya;

    aditya.setFirstName("Aditya");
    aditya.setLastName("Tomar");

    // aditya.displayFirstName();
    // aditya.displayLastName();

    displayFullName(aditya);

    return 0;
}