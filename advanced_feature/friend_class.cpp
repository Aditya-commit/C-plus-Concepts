#include <iostream>

class Base; // FORWARD DECLARATION

class Derived{

    int id;

    friend class Base;

    public:

        Derived(int id1){ id=id1; }

        
};

class Base {

    public:

        void getId(Derived d){ std::cout << d.id; };
};

int main(){

    Derived d(304);
    Base b;

    b.getId(d);

    return 0;
}