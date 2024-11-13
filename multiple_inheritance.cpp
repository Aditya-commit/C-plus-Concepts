#include <iostream>
using namespace std;


class GreetPhase1{

public:

	void greetMorning(void){
		cout << "Good Morning Sir" << endl;
	}

	~ GreetPhase1(){
		cout << "This is the destructor of GreetPhase1" << endl;
	}
};

class GreetPhase2{

public:

	void greetEvening(void){
		cout << "Good Evening Sir" << endl;
	}

	~ GreetPhase2(){
		cout << "This is the destructor of GreetPhase2" << endl;
	}
};

class GreetPhase3:public GreetPhase1 , public GreetPhase2{

//IF THERE IS A CONSTRUCTOR ATTACHED TO THE ABOVE CLASSES FIRST THE CONSTRUCTOR OF CLASS GREETPHASE1 WILL BE CALLED AND THEN THE CONSTRUCTOR OF GREETPHASE2 WILL BE CALLED ACCORDING TO THE ORDER IN WHICH THE CLASS IS INHERITED

public:

	void greetNight(void){
		cout << "Good Night Sir" << endl;
	}
};


int main(){


	GreetPhase3 obj;

	obj.greetMorning();
	obj.greetEvening();
	obj.greetNight();


	return 0;
}