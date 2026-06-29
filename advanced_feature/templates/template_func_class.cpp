#include <iostream>

template <typename T>
T returnValue(T value) { return value; };

template <typename T , typename T2>
class Sample {
    
    T value;
    T2 value2;
    
    public:
        
        Sample(T value , T2 value2) {
            this->value = value;
            this->value2 = value2;
        }
        
        void displayValue(void){ std::cout << "value = " << value << std::endl; };
        
        void displayValue2(void){ std::cout << "value2 = " << value2 << std::endl; };
};

int main(){
    
    std::cout << returnValue(23) << std::endl;
    std::cout << returnValue("23") << std::endl;
    std::cout << returnValue(23.334) << std::endl;
    std::cout << returnValue(23.3434) << std::endl;
    std::cout << returnValue(23.33) << std::endl;
    
    Sample<int , std::string> a(234 , "44");
    Sample<float , float> f(434.334 , 44423.34);
    Sample<char , int> c('e' , 'B');
    
    a.displayValue();
    f.displayValue();
    c.displayValue();
    
    a.displayValue2();
    f.displayValue2();
    c.displayValue2();
    
    return 0;
}