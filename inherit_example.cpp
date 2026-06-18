#include <iostream>

class Test {
    int age;
    
    public:
        
        Test(int val) : age(val) {};
        
        void displayAge(void) { std::cout << "Age = " << age << std::endl; };
};

class TestInherit : public Test {
    
    public:
        
        TestInherit(int val) : Test(val) {};
};

int main() {
    
    TestInherit t(104);
    
    t.displayAge();
    
    return 0;
}