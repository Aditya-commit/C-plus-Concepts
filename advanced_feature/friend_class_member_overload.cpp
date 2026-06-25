#include <iostream>

class Example {

    private:
        int i ;
        float j;

    public:
        Example(int ii=0 , float jj=0.0f){
            i=ii;
            j=jj;
        }

        // Example operator *(Example e){

        //     Example temp;

        //     temp.i = i * e.i;
        //     temp.j = j * e.j;

        //     return temp;
        // }

        friend Example operator* (const Example &a , const Example &b);
};

Example operator *(const Example &a , const Example &b){

    Example temp;

    temp.i = a.i * b.i;
    temp.j = a.j * b.j;

    return temp;
}

int main(){

    Example e1(23 , 4.3) , e2 , e3;

    e2 = e1 * 2; // THI IS CORRECT SINCE LEFT HAND OPERAND IS AN OBJECT OF CLASS EXAMPLE SO RIGHT HAND (2) WHICH IS INT CAN BE IMPLICITLY BE CONVERTED INTO EXAMPLE(2 , 0.0f)

    // e3 = 2 * e1; // THIS IS WRONG SINCE LEFT SIDE OPERAND IS INT AND WE CANNOT MULTIPLY INT TO OBJECT OF EXAMPLE

    // To fix this we need to use friend class here

    e3 = 2 * e1;
}