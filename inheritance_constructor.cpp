#include <iostream>
using namespace std;


class Ex{

public:

	Ex(){
		cout << "This is the constructor of the Base class" << endl; // FIRST BASE CLASS CONSTRUCTOR IS CALLED
	}

	void greet(){
		cout << "Hello this is ex function";
	}
};

class NewEx:public Ex{


public:

	NewEx(){

		cout << "This is the constructor of the Derived Class"; // AND THEN DERIVED CLASS CONSTRUCTOR IS CALLED
	}

	void greet(){

		cout << "Hello this is NewEx function";
	}
};

int main(){

	NewEx obj1;

	obj1.greet();

	return 0;
}