#include <iostream>
#include <set>

int main(){

    std::set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    std::cout << s.empty() << std::endl;
    
    std::cout << s.size() << std::endl;
    std::cout << s.max_size() << std::endl;
    
    s.erase(44);
    s.erase(20);
    
    std::cout << s.size() << std::endl;
    std::cout << s.max_size() << std::endl;
    
    s.clear(); // removes all elements of the container
    
    std::cout << s.size() << std::endl;
    std::cout << s.max_size() << std::endl;

    return 0;
}