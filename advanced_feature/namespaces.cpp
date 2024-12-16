#include <iostream>
#include <string>
using namespace std;


namespace user{
    string name = "aditya";
    void greet(void); // DECLARE HERE
}

void user::greet(void){
    // CAN DEFINE OUTSIDE OF NAMESPACE IF WE WANT
    cout << "Hello " << user::name << " how are you doing" << endl;
}


namespace company{
    string name = "sky technologies";
}


int main(){

    using namespace user;
    using namespace company;

    namespace comp = company; // NAMESPACE ALIAS

    cout << user::name << endl;
    cout << comp::name << endl;

    greet();

    return 0;
    
}