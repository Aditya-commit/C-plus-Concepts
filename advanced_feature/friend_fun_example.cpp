#include <iostream>

class Sample {
    
    private:
        
        int id;
        
        void runPrivate(void){
            std::cout << "This is private member function" << std::endl;
        }
        
    public:
    
        Sample(int id1) { id = id1; }
        
        friend void showId(Sample obj); // FRIEND FUNCTION CAN ACCESS PRIVATE MEMBERS

        friend void execPrivateMember(Sample obj); // FRIEND FUNCTION CAN ACCESS PRIVATE MEMBER FUNCTIONS
};

void showId(Sample obj){
    // YOU SHOULD ALWAYS GIVE THE DEFINITION OUTSIDE THE CLASS
    std::cout << "id=" << obj.id << std::endl;
};

void execPrivateMember(Sample obj){ obj.runPrivate(); };

int main(){
    
    Sample a(328);
    
    showId(a);
    
    execPrivateMember(a);
    
    return 0;
}