#include <iostream>
using namespace std;


class GreetPhase1{

public:

	void greet(void){
		cout << "Good Morning Sir" << endl;
	}
};

class GreetPhase2:public GreetPhase1{

public:

	void greet(void){
		cout << "Good Evening Sir" << endl;
	}
};

int main(){


	GreetPhase2 obj;

	obj.greet();
	obj.greet();


	return 0;
}