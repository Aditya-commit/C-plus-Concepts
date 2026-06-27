#include <iostream>
#include <string>
using namespace std;

struct diseasePrice {
    int kidney_stone;
    int appendicitis;
    int lung_cancer;
    int fracture;
};

class Hospital{
    
    public:
    
        static int totalRevenue;
        void getTotalRevenue(void){
            cout << "Total Revenue = " << endl;
        }
};

class Operations : public Hospital{
    
    private:
        string name;
        string disease;
        diseasePrice diseasesPrice;
    
    public:
    
        Operations(string Name , string disease){
            this->name = Name;
            this->disease = disease;
            
            diseasesPrice.kidney_stone = 23434;
            diseasesPrice.appendicitis = 23434;
            diseasesPrice.kidney_stone = 23434;
            diseasesPrice.lung_cancer = 23434;
            diseasesPrice.fracture = 23434;
        }
        
        void displayName(void){
            cout << this->name << endl;
        }
        
        void displayDisease(void){
            cout << this->disease << endl;
        }
        
        void operator +(Operations &obj1){
            
            // Hospital::totalRevenue = diseasePriceObj[this->disease] + diseasePriceObj[obj1.disease]
        }
};

int main(){
    
    Operations obj1("Aditya Singh Tomar" , "appendicitis") , obj2("Ishu" , "kidney stone");
    Hospital revenue;
    
    obj1 + obj2; // TOTAL REVENUE
    
    revenue.getTotalRevenue();
    
    return 0;
}