#include <iostream>
using namespace std;


class Shape{

// BASE CLASS

// ABSTRACT CLASS AS IT CONTAINS ATLEAST ONE PURE VIRTUAL FUNCTION

protected:
	int width , height;

public:


	Shape(int a , int b); // CONSTRUCTOR DECLARATION

	// PURE VIRTUAL FUNCTION
	virtual int getArea(void) = 0;

};


Shape::Shape(int a , int b){

	// CONSTRUCTOR DEFINITION

	width = a;
	height = b;
};


class Triangle:public Shape{

	public:

		Triangle(int a , int b):Shape(a , b){}


		int getArea(void){

			return (width*height)/2;
		}	
};



int main(){

	Shape *shape;

	Triangle tri(10 , 20);

	shape = &tri;


	cout << shape->getArea();

	return 0;
}