#include <iostream>
#include <cstring>
using namespace std;


class Sample{

    private:

        char name[20];
        mutable int age; // WE USED mutable HERE CAUSE USING THIS WE CAN CHANGE THE VALUE OF CLASS MEMBER THROUGH THE CONST MEMBER FUNCTION

    public:

        Sample(const char *name , int age){
            
            strncpy(this->name , name , 21);
            this->age = age;
        }

        void changeData(int currentAge) const{ // WE ARE USING const HERE CAUSE SINCE WILL NOT BE ABLE TO ACCESS THIS MEMBER FUNCTION AS THE OBJECT CREATED OF THIS CLASS IS A CONST OBJECT
            age=currentAge;
        }

        void displayAge(void) const{
            cout << "Age is = " << age<< endl;
        }

        void displayName(void) const{
            cout << name << endl;
        }
};

int main(){

    const Sample s1("Aditya Singh Tomar" , 21);

    s1.displayName();
    s1.displayAge();

    cout << "Upddating the age" << endl;

    s1.changeData(23);

    s1.displayAge();

    return 0;

}