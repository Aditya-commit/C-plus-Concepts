#include <iostream>
#include <string>

using namespace std;



class Shape{

    // BASE CLASS

    static int pincode;

    protected:

        int width;
        int height;

    public:

        void setWidth(int width){

            this->width = width;
        }

        void setHeight(int height){
            this->height = height;
        }
};


class Rectangle: public Shape{

    public:

        void printArea(void){

            cout << "The area of rectangle is " << (width * height);
        }
};


int main(){

    Rectangle rect1;

    rect1.setWidth(20);
    rect1.setHeight(50);

    rect1.printArea();


    return 0;
}