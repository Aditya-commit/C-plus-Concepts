#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;


int main(){

    _setmode(_fileno(stdout) , _O_U16TEXT);
    wcout << "Folowing characters are in Cyrillic" << endl;
    wcout << L"\x0411\x414"<<endl;
    wcout << L"\x0905\x0906"<<endl;
    
    return 0;
}