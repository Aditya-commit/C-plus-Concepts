#include <iostream>
using namespace std;



/*
	IF THE BASE CLASS HAS VIRTUAL FUNCTION DECLARED AND WE DO NOT HAVE THAT SAME FUNCTION IN THE DERIVED CLASSES THEN WE CANNOT CREATE OBJECTS OF THAT DERIVED CLASS
*/



class Shape{

protected:

	int width , height;

public:

	Shape(int a , int b){

		width = a;
		height = b;
	}


	// PURE VIRTUAL FUNCTION
	virtual int getArea(void) = 0;
};


class Triangle:public Shape{

public:

	Triangle(int a , int b):Shape(a , b){}

	int getArea(void){

		return (width * height)/2;
	}
};

class Rectangle:public Shape{

public:

	Rectangle(int a , int b):Shape(a , b){}

	int getArea(void){
		return (width * height);
	}
};


int main(){


	Shape *shape;


	Rectangle rect(10 , 20);

	shape = &rect;


	cout << shape->getArea();


	return 0;
}

