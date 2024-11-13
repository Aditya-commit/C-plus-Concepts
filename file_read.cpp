#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main(){

    ifstream inputFile("test.txt");

    if(!inputFile.is_open()){

        cout << "File cannot be opened";
        return 1;
    }

    string line;

    while(getline(inputFile , line)){

        cout << line << "\n";
    }


    inputFile.close();

    return 0;

}