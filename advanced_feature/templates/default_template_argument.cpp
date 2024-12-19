#include <iostream>
using namespace std;


template <typename T=int> // THIS TELLS THE COMPILER THAT IF THE OBJECT TYPE IS NOT MENTIONED DURING THE OBJECT CREATION USE INT
class Base{

    public:

        void displayArg(T a);
};

template <typename T>
void Base<T>::displayArg(T a){
    cout << a << endl;
};


int main(){

    Base <>b;
    Base <char>c;
    Base <float>f;

    b.displayArg(34);
    b.displayArg('d');
    b.displayArg(23.4f);

    c.displayArg('d');
    f.displayArg(23.34f);
    
    return 0;
}