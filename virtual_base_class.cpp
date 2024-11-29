#include <iostream>
using namespace std;





class Base{


	int a;


public:

	Base(){
		a = 10;
	}

	void showData(void){
		cout << a;
	}

	void updateData(int i){
		a=i;
	}

	virtual void updateNewData(int i){
		a=i;
	}
};

class Dervied1 : public virtual Base{

public:

	void updateNewData(int j){
		cout << "This is from dervied 1";
	}
};

class Dervied2 : virtual public Base{

public:

	void updateNewData(int j){
		cout << "This is from dervied 2";
	}
};


class Dervied3 : public Dervied1 , public Dervied2 {

public:

	void updateNewData(int j){
		cout << "This is the function of dervied 3";
	}
};



int main(){


	Dervied3 d3;

	d3.showData();

	d3.updateNewData(12);

	d3.showData();

	return 0;
}