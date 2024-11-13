#include <iostream>
using namespace std;


class Date{

private:
	int dd , mm , yy;

public:
	Date(){
		cout << "Reached here" << endl;
	}

	void greet(void){
		cout << "hello";
	}
};

int main(){

	Date today;

	Date *p = &today;
	cout << p << endl;

	today.greet();
	cout << endl;

	p->greet();
	return 0;
}