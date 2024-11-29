#include <iostream>
using namespace std;


int main(){

    char ch;

    cin.get(ch); // RECIEVED 'w'

    cout << ch;
    cin.putback(ch); // PUTS THE w BACK INTO THE INPUT STREAM
    cout << ch;

    cin.get(ch); // AGAIN TAKES THE w NOW THE INPUT STREAM HAS ww
    cout << ch;


    return 0;
}