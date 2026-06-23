#include <iostream>

class Engine {

    public:

        int enginePrice;

        void startEngine(){ std::cout << "Engine started" << std::endl; };

        Engine(int price) { enginePrice = price; }
};

class Car {

    public:

        void startCar(Engine *engine){
            engine->startEngine(); // WHEN WE GET THE CONTIANER'S OBJECT AS A REFERENCE/POINTER THEN THAT TYPE OF OWNERSHIP IS WEAK OWNERSHIP BECUASE OWNWER IS LOOSESLY ATTACHED TO THE CONTAINER'S OBJECT
            // DELETING THE OWNER DOES NOT DELETE THE CONTAINER'S OBJECT
        }
};

int main(){

    Engine engine(12345);
    
    Car *alto = new Car();

    alto->startCar(&engine);

    std::cout << engine.enginePrice;

    delete alto;

    return 0;
}