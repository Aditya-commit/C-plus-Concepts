#include <iostream>
using namespace std;

class Date{

    private:

        int month , year , day;

    public:

        Date(int day=0 , int month=0 , int year=0){
            this->day = day;
            this->month = month;
            this->year = year;
        }

        void displayDate(void){

            cout << day << " " << month << ", " << year << endl;
        }

        Date operator+(Date &obj){

            Date tempObj;

            tempObj.day = this->day + obj.day;
            tempObj.month = this->month + obj.month;
            tempObj.year = this->year + obj.year;
        
            return tempObj;
        }

};

int main(){

    Date d1(22 , 12 , 2024) , d2(12 , 4 , 2035) , d3;

    d3 = d1+d2;

    d3.displayDate();

    return 0;
}