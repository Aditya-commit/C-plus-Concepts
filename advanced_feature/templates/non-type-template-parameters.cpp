#include <iostream>
#include <string>

template <typename T , int SIZE>
void displayVal(T val){
    std::cout << val << std::endl;
    std::cout << SIZE << std::endl;
}

template <typename T , char KEY>
class Sample {
    
    char symbol = KEY;
    
    T val;
    
    public:
        
        Sample(T val){
            this->val = val;
        }
        
        void displayVal(void) { std::cout << val << std::endl; }
        
        void displaySymbol(void){ std::cout << "symbol = " << symbol << std::endl; };
};

int main(){
    
    displayVal<int , 4>(23);
    displayVal<char , 6>('e');
    
    Sample<int , 'd'> a(23);
    
    a.displayVal();
    a.displaySymbol();
    
    return 0;
}