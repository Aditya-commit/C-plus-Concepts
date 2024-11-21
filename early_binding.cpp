#include <iostream>
using namespace std;



class Shape{

    public:

        void draw(void){
            cout << "Draw function of Shape class is called\n";
        }
};

class Rectangle: public Shape{

    public:

        void draw(void){
            cout << "Draw function of Rectangle class is called\n";
        }
};

class Triangle : public Shape{

    public:

        void draw(void){
            cout << "Draw function of Triangle class is called\n";
        }
};



int main(){


    // HERE SINCE THE CALL TO THE DRAW FUNCTION IS MADE USING THE OBJECT OF THAT CLASS SO THERE IS NO CONFUSION DUE TO WHICH THE COMPILER LINKED THE FUNCTION WITH THEIR RESPECTIVE OBJECT DURING COMPILE TIME


    Shape s1;
    Rectangle r1;
    Triangle t1;

    s1.draw();
    r1.draw();
    t1.draw();

    return 0;
}