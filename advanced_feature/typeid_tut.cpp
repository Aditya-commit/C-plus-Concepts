#include <iostream>
#include <typeinfo>

using namespace std;



class Sample{};


int main(){

    char ch = '2';

    int d = 43;
    int c =23;

    Sample s1;

    const type_info& b = typeid(c); // RETURNS THE REFERENCE OF THE TYPE OF THE OPERAND AND THE REFERENCE IS A CONST REFERENCE THAT IS WHY WE ARE USING CONST PONTER

    const type_info &a = typeid(ch);
    const type_info &di = typeid(d);

    // const type_info &s = typeid(s1);

    cout << typeid(s1).name() << endl;

    if(b == a){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }

    if(di == b){
        cout <<"yes";
    }
    else{
        cout << "no";
    }

    return 0;
}