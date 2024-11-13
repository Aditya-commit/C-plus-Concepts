#include <iostream>
#include <string>

using namespace std;


class Shape{

// BASE CLASS

protected:
	int width , height;

public:

	Shape(int a , int b){

		// CONSTRUCTOR

		width = a;
		height = b;
	}

	int getArea(void){

		cout << "The area of class Shape is";
		return (width * height);
	}
};


class Triangle: public Shape{

	public:

		Triangle(int a, int b): Shape(a , b){}

		int getArea(void){

			cout << "The area of triangle is ";
			return (width * height)/2;
		}

};

class Rect: public Shape{

public:

	Rect(int a, int b):Shape(a , b){}

	int getArea(void){

		cout << "The area of rectangle is ";
		return (width * height);
	}
};



int main(){


	//Shape *shape; // BAD PRACTISE

	Shape *shape = nullptr; // GOOD PRACTISE

	// cout << shape;


	// shape->getArea();

	Triangle tr1(10 ,20);

	cout << tr1.getArea();
	

	shape = &tr1;

	cout << shape->getArea(); // HERE THE FUNCTION OF SHAPE CLASS WILL RUN BECAUSE OF THE STATIC LINKAGE OR THE EARLY BINDING OF THE FUNCTION BY THE COMPILER BECAUSE WHEN THE COMPILER IS COMPILING THE PROGRAM LINE BY LINE AS SOON AS IT SESS THE AREA() FUNCTION IS SETS THAT FUNCTION ON THE CALL


	return 0;
}