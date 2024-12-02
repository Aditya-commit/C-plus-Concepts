#include <iostream>
using namespace std;



class Example{
private:

	int i;
	float j;

public:

	Example (int ii=0 , float jj=0.0f){
		i=ii;
		j=jj;
	}

	void showData(){
		cout << i << "\t" << j << endl;
	}
	friend Example operator * (Example , Example);
};

Example operator * (Example k , Example I){

	// SINCE THIS FUNCTION IS DEFINED AS FRIEND SO ANY OBJECT PRESENT IN THE SCROPE OF THIS FUNCTION CAN ACCESS THE PRIVATE MEMBER AND PRIVATE MEMBER FUNCTION OF CLASS EXAMPLE

	Example temp;

	temp.i = k.i * I.i;
	temp.j = k.j * I.j;
	return temp;
};


int main(){

	Example e1(10 , 3.14f) , e2(1 , 1.5f) , e3 , e4 , e5;

	e3 = e1*2; // HERE INTERNAL TYPE CONVERSION (TYPE CASTING OR TYPE PROMOTION IS HAPPENING) DUE TO WHICH 2 SINCE IT IS AN INTEGER IS RECIEVED AS INTEGER ARGUMENT [Example(2)] AND USES THE FLOAT DEFAULT VALUE
	e4 = 2*e2; // SAME HERE
	e5 = e1* e2*2;

	e3.showData();
	e4.showData();
	e5.showData();


	return 0;
}