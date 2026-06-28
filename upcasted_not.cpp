#include <iostream>

class Base{

    public:
        void displayMessage(void);
};

class Derived : public Base {
    public:
        void displayMessage(void){ std::cout << "Derived class" << std::endl; }
};

void Base::displayMessage(void){ std::cout << "Base class" << std::endl; };

int main(){

    Base *b = new Derived();

    b->displayMessage();

    return 0;
}

// SINCE WE ARE NOT USING ANY VIRTUAL KEYWORD FOR THE MEMBER FUNCTION IT WILL NOT CREATE ANY VIRTUAL TABLE/VPOINTER SO IT WILL LOOK FOR THE TYPE OF POINTER INSTEAD OF THE TYPE OF THE ADDRESS'S OBJECT