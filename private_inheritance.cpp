#include <iostream>
#include <string>


using namespace std;



class Shape{

    public:
        int width;

};

class Rectangle: private Shape{

    public:

        void setWidth(int w){
            width = w;
        }

        void getWidth(void){
            cout << width;
        }
};


int main(){

    
    Rectangle rect1;

    /* THESE WORKS IF THE BASE IS INHERITED AS BASE CLASS

        rect1.width = 23; 

        cout << rect1.width << "\n";
    */


   rect1.setWidth(34);

   rect1.getWidth();

    return 0;
}