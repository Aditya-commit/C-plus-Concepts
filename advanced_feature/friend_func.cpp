#include <iostream>
using namespace std;





class Example{

private:
	int i;
	float j;

public:

	Example(){}

	Example(int i , float j){
		this->i = i;
		this->j = j;
	}

	void showData(void){
		cout << "i = " << i << endl << "j = " << j << endl;
	}

	Example operator *(Example e){
		// OVERLOADING THE * OPEATOR TO PERFORM THE MULTIPLICATION BETWEEN THE TWO OBJECTS OF EXAMPLE CLASS

		Example temp;

		temp.i = i * e.i;
		temp.j = j * e.j;

		return temp;
	}
};


int main(){

	Example a(23 , 343.334f) , b(2343  , 12.3f) , c , d;

	c = a*b;
	d = a*c;

	c.showData();
	d.showData();

	return 0;
}