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

    // ----------------------------------------
    std::cout << m["name"] << std::endl;
    
    std::cout << m["unknown"] << std::endl; // THIS will modify the map with the default value of Value Type
    
    std::cout << m.at("unknown") << std::endl; // This will return the value for unknown since it has been already added on the map by the above line m["unknown"]
    
    auto val = m.at("unknown");
    
    std::cout << typeid(val).name() << std::endl;
    auto val = m.at("unknown1"); // WILL THROW AN ERROR std::out_of_range as it does not exist in map , We can also use find() method

    // ----------------------------------------
    return 0;
}