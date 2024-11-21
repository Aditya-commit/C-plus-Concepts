#include <iostream>
using namespace std;




class Shape{

    public:

        void displayClass(void){
            cout << "This is Shape class\n";
        }
};

class Rectangle : public Shape{

    public:

        void displayClass(void){
            cout << "This is Rectangle class\n";
        }
};

class Triangle : public Shape{

    public:

        void displayClass(void){
            cout << "This is rectangle class\n";
        }
};



void func(Shape *s){

    s->displayClass();
}




int main(){


    // HERE BY WHICHEVER CLASS OBJECT'S POINTER YOU SEND TO THE func() FUNCTION IT WILL ALWAYS CALL THE BASE CLASS displayClass() MEMBER FUNCTION

    Shape *s = new Shape();
    Rectangle *r = new Rectangle();
    Triangle *t = new Triangle();
    func(s);
    func(r);
    func(t);

    return 0;
    
}