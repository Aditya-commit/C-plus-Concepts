#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){

    ifstream inputFile("file.txt");

    if(inputFile.is_open()){

        string line;

        while(getline(inputFile , line)){
            cout << line << endl;
        }
    }
    else{
        cout << "File could not be opened";
    }

    inputFile.close();

    return 0;
}