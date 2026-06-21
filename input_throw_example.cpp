// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

int main() {

    std::string salaryInput = "";
    
    std::cout << "Hi , Welcome to ctc Calculator :" << std::endl;

    std::cout << "Enter your salary in months = ";
    
    std::cin >> salaryInput;
    
    try{
        
        long long salary = static_cast<long long>(std::stoi(salaryInput));
        
        if(salary > 0){
            
            const long long ctc = salary * 12;
            
            std::cout << "Your Total Annual Salary (CTC) = " << ctc;
        }
    }
    catch(const std::invalid_argument){
        std::cout << "Please enter a valid salary in numbers ";
    }
    catch(const std::out_of_range){
        std::cout << "The value is not in the range ";
    }
    
    return 0;
}