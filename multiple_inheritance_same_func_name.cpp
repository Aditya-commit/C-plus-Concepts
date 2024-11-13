#include <iostream>
using namespace std;


class GreetPhase1{

public:

	void greet(void){
		cout << "Good Morning Sir" << endl;
	}
};

class GreetPhase2{

public:

	void greet(void){
		cout << "Good Evening Sir" << endl;
	}
};

class GreetPhase3:public GreetPhase1 , public GreetPhase2{};


int main(){


	GreetPhase3 obj;

	obj.GreetPhase1::greet();
	obj.GreetPhase2::greet();


	return 0;
}