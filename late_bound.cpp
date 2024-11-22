#include <iostream>
using namespace std;


// FOR THE LATE BINDING TO WORK THE BASE CLASS MEMBER FUNCTION MUST BE VIRTUAL


class Shape{

    public:

        virtual void draw(void) const{
            cout << "Draw function of Shape class is called\n";
        }
};

class Rectangle: public Shape{

    public:

        void draw(void) const{
            cout << "Draw function of Rectangle class is called\n";
        }
};

class Triangle : public Shape{

    public:

        void draw(void) const{
            cout << "Draw function of Triangle class is called\n";
        }
};


void dynamicDraw(Shape *s){

    // WE CAN ALSO USE CALL BE REFERENCE METHOD INSTEAD OF CALL BY ADDRESS

    s->draw();
}


int main(){

    // HERE LATE BINDING HAPPENS WITH THE dynamicDraw FUNCTION AS IT DOES NOT KNOW WIHCH CLASS draw FUNCTION NEEDS TO CALLED

    Shape *s1 = new Shape();
    Rectangle *r1 = new Rectangle();
    Triangle *t1 = new Triangle();

    dynamicDraw(s1);
    dynamicDraw(t1);
    dynamicDraw(r1);

    // I HAVE COMPLICATED IT A LITTLE BIT BY USING dynamic ALLOCATION OF OBJECTS

    delete s1;
    delete r1;
    delete t1;

    return 0;
}