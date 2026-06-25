#include <iostream>


class Example {

private:
	int i;
	float j;

public:
	explicit Example(int ii=0 , float jj=0.0f){

		// NOW WHEN WE USE explicit KEYWORD HERE WE CAN'T DO a * 2 INSIDE main() FUNCTION AS IT WILL NOT CONVERT THE INT INTO THE OBJECT

		i=ii;
		j=jj;
	}

	Example operator*(Example obj){
		return obj;
	}
};

int main(){

	Example a(10 , 23.4) , b(34 ,93.334) , c , d;

	c = a * 2; // THIS WILL THROW ERROR

	return 0;
};