#include <iostream>
using namespace std;


class Ex{

public:

	void greet(){
		cout << "Hello this is ex function";
	}
};

class NewEx:public Ex{

public:

	void greet(){

		cout << "Hello this is NewEx function";
	}
};

int main(){

	NewEx obj1;

	obj1.greet();

	return 0;
}