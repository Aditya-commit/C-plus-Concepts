#include <iostream>

class Date{
    
    int year , month , day;
    
    public:
        
        Date(int year , int month , int day){
            this->year = year;
            this->month = month;
            this->day = day;
        };
        
        bool operator <(Date &obj){
            
            if(year < obj.year){
                return false;
            }
            else if(month < obj.month){
                return false;
            }
            else if(day < obj.day){
                return false;
            }
            else{
                return true;
            }
        }
};

template <typename T>
void mymin(T val1 , T val2){
    
    if(val1 < val2){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    };
};


int main(){
    
    mymin(344 , 55);
    
    Date a(2025 , 4 , 12) , b(2026 , 5 , 9);
    
    mymin(a , b);
    
    return 0;
}