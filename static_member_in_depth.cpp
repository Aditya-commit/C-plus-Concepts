#include <iostream>

class Sample {
    
    std::string type;
    static int counter;
    
    public:
        
        Sample(){
            type = "user";
        }
        
        void counterIncrementer(){
            counter++;
        }
        
        void displayCounter(){
            std::cout << counter << std::endl;
        }
        
        static void checkStaticFunc(){
            // STATIC MEMBER FUNCTIONS CAN ONLY ACCESS STATIC MEMBERS
            std::cout << counter << std::endl << type << std::endl;
        }
};

int Sample::counter = 0;

int main() {

    Sample s1;
    
    s1.counterIncrementer();
    s1.displayCounter();
    // std::cout << Sample::counter << std::endl;

    return 0;
}