#include <iostream>
using namespace std;

template <typename T>
class Base{
    public:
    
        void printArg(T a);
};

template <typename T>
void Base<T>::printArg(T a){
    cout << a << endl;
};

int main(){
    
    Base <int>b;
    Base <char>c;
    Base <float>f;
    
    b.printArg(2);
    c.printArg('c');
    f.printArg(23.3f);
    
    return 0;
}