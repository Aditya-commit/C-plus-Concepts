#include <iostream>
using namespace std;


template <typename T>
class Base{
    
    protected:
        T a;
    
    public:
        
        Base(T a){
            
            this->a = a;
        }
};

template <typename T>
class Derived : public Base<T>{
    
    public:
    
        Derived(T a) : Base<T>(a){}
        
        void showData(void){
            cout << this->a << endl;
        }
};


int main() {


    Derived <int>d(10);
    Derived<char>c('a');
    Derived<float>f(23.f);
    
    c.showData();
    d.showData();
    f.showData();
 
    return 0;
}