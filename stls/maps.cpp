#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){

    map<string , int> users;

    users["aditya"] = 23;
    users["aman"] = 22;



    // ANOTHER WAY OF INITIALIZING A MAP VARIABLE

    map<string , int> posts = { {"uwlrijf" , 2} , {"3r3r" , 1} };


    cout << users["aditya"] << endl << posts.at("uwlrijf");

    return 0;
}