#include <iostream>
#include <string>
using namespace std;


class Address{
	private :
		string name  ,city;
	public:
		Address(string p , string q){
			name=p;
			city = q;
		}
};

int main(){
	Address my("Mac" , "London");
	return 0;
}