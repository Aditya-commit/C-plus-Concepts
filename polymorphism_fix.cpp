#include <iostream>
#include <string>

using namespace std;


class Shape{

protected:

	int width , height;

public:

	Shape(int a , int b){

		width = a;
		height = b;
	}

	virtual int getArea(void){

		return (width*height);
	}
};


class Triangle: public Shape{

public:

	Triangle(int a, int b): Shape(a , b){}

	int getArea(void){

		return (width * height)/2;
	}
};


class Rectangle:public Shape{

	public:

		Rectangle(int a , int b): Shape(a , b){}
};


int main(){


	Shape *shape;

	Triangle tr1(20 , 10);

	shape = &tr1;

	cout << "Directly accessing the getArea() of Triangle class ";

	cout << tr1.getArea();

	cout << "\n" << "Accessing the getArea() of pointer object ";
	cout << shape->getArea();



	cout << "\n" << "Working with Reactangle class" << "\n";

	Rectangle rect1(30 , 30);

	return 0;
}