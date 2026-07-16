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


    cout << users["aditya"] << endl << posts.at("uwlrijf") << endl;

    pair<string , string> p ("name" , "aditya singh tomar");

    cout << p.first << " " << p.second;

    std::map<std::string , std::string> m = {{ "name" , "aditya" }};
    
    auto it = m.begin();
    
    std::cout << (*it).first << " " << (*it).second << std::endl;
    std::cout << it->first << " " << it->second << std::endl; // SHORT HAND OF (*it). to ->

    return 0;
}