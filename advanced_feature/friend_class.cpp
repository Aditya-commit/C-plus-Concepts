#include <iostream>

class Base; // FORWARD DECLARATION

class Derived{

    int id;

    friend class Base;

    public:

        int publicIp;

        Derived(int id1 , int publicIp1){
            id = id1;
            publicIp = publicIp1;
        }       
};

class Base {

    public:

        void getId(Derived d){ std::cout << d.id << std::endl; };

        void getPublicIp(Derived d) { std::cout << "Ip = " << d.publicIp << std::endl; }
};

int main(){

    Derived d(304 , 12345);
    Base b;

    b.getId(d);
    b.getPublicIp(d);

    return 0;
}