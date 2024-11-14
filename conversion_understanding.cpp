#include <iostream>
using namespace std;


class Time{

	int hours , min;

	public:

		Time();

		Time(int t);

		void display(void); // FUNCTION PROTOTYPING
};


Time::Time(){

	hours = 0;
	min=0;
};

Time::Time(int t){

	hours = t/60;
	min = t%60;
}

void Time::display(void){

	cout << "hours = " << hours << endl << "Minutes = " << min;
}


int main(){

	Time t1;

	Time t2(120);

	t1.display();

	t2.display();

	return 0;
}