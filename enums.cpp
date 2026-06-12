#include <iostream>
using namespace std;


int main(){

    enum color { red , green , blue } c;

    c = red;

    // EVERY NEXT NAME HAS A VALUE ONE GREATER THAN ITS PRECEEDING NAME

    cout << c;
}