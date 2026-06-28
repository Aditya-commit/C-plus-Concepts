#include <iostream>
#include <string>

namespace user {
    std::string name = "anonymous";
    void setName(std::string name);
    std::string getName(void);
    void greetUser(void);
}

namespace company {
    std::string name = "anonymous company";
    void setName(std::string value);
    std::string getName(void);
}

void user::setName(std::string value){ user::name = value; };
std::string user::getName(void){ return user::name; }
void greetUser(void) { std::cout << "Hi " << user::name << " sir!" << std::endl; };

void company::setName(std::string value) { company::name = value; };
std::string company::getName(void) { return company::name; };

int main(){

    using namespace company;

    namespace comp = company;
    
    std::cout << user::getName() << std::endl;
    std::cout << comp::getName() << std::endl;
    
    greetUser(); // SINCE THERE IS ONLY ONE greetUser FUNC SO NO AMBIGUITY SO THERE IS NO NEED TO CALL IT WITH EXTENSION OPERATOR
    
    return 0;
}