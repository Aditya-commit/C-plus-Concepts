#include <iostream>
#include <string>

class Engine {

    public:

        void startEngine(){ std::cout << "Engine has started " << std::endl; }

        Engine(){ std::cout << "Engine contructor" << std::endl; }

        ~Engine(){ std::cout << "Engine destructor" << std::endl; }

};

class Car {

    private:
        Engine engine; // CONTAINER'S OBJECT LIFETIME DEPENDS ON THE OWNER (WHEN CAR'S OBJECT IS DESTROYED THE ENGINE CONTAINER'S OBJECT WILL ALSO BE DESTROYED)

    public:
        std::string name;

        Car(std::string carName){
            std::cout << "Car contructor" << std::endl;
            name = carName;
        }

        ~Car(){ std::cout << "Car contructor" << std::endl; }

        void displayName(void) { std::cout << "Car = " << name << std::endl ; }

        void startCar(void) { engine.startEngine(); }
};

int main(){

    Car alto("Alto");

    alto.displayName();
    alto.startCar();

    return 0;
}

// IF WE WOULD HAVE BEEN USING INHERITANCE WE WOULD SAY CAR IS AN ENGINE WHICH IS WRONG

// A famous OOP principle says:
    // Favor composition over inheritance.

// Because composition is often more flexible.