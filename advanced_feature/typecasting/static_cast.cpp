#include <iostream>
using namespace std;



class Base {

    protected:
        int age;

    public:

        Base(int age){
            this->age = age;
        }
};

class Derived : public Base{

    public:

        Derived(int a) : Base(a){}

        void dispAge(void){
            cout << "age = " << age << endl;
        }
};

int main(){

    Base *b = new Derived(23);

    //b->dispAge(); // THIS WILL GIVE THE ERROR AS IT WILL CHECK IN THE BASE CLASS ONLY DUE TO EARLY BINDING SO TO USE THE MEMBER FUNCTION OF THE DERIVED CLASS WE HAVE TO CONVERT IT TO THE DERIVED CLASS AS IT IS ALREADY POINTING TO THE ADDRESS OF THE DERVIED CLASS IN HEAP MEMORY


    // ANOTHER METHOD COULD HAVE BEEN TO DEFINE A VIRTUAL FUNCTION IN THE BASE CLASS (A BETTER APPROACH) BUT WE ARE NOT USING THIS APPROACH HERE

    Derived *bd = static_cast<Derived*>(b); // NOW HERE SINCE WE ARE 100% SURE THAT THE DERIVED OBJECT AND BASE CLASS OBJECT BOTH ARE REALTED TO EACH OTHER THEREFORE WE ARE USING STATIC CAST OTHERWISE WE WOULD BE USING DYNAMIC CAST AS IT LETS US TO CHECK IF THEY BOTH ARE RELATED IT WILL RETURN SOMETHING OTHERWISE IT WILL RETURN 0
    bd->dispAge();


    return 0;
}