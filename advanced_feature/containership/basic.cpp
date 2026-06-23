#include <iostream>
#include <string>

class Engine {

    public:

        void startEngine(){ std::cout << "Engine has started " << std::endl; }

};

class Car {

    private:
        Engine engine; // CONTAINERSHIP ( CAR HAS A ENGINE )

    public:
        std::string name;

        Car(std::string carName){
            name = carName;
        }

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