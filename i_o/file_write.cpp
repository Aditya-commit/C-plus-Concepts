#include <iostream>
#include <fstream>
using namespace std;



int main(){


    ofstream outputFile("file1.txt");

    char text[100];

    cout << "Please enter something" << endl;

    cin.get(text , 100); // THE DATA STREAM WILL FLOW FROM INPUT DEVICE TO text VARIABLE

    // is_open IS THE MEMBER FUNCTION OF CLASS ofstream
    if(outputFile.is_open()){
        
        outputFile << text; // THE DATA STREAM WILL FLOW FROM text VARIABLE TO outputFIle
        outputFile.close();
    }
    else{

        cout << "File cannot be opened";
    }


    return 0;
}