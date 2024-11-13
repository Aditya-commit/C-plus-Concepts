#include <iostream>
using namespace std;

class Sample{
private:
	int i; float a;

public:

	Sample(){
		i=10;
		a=3.14f;
	}

	void showData(){
		cout << i << endl << a << endl;
	}

	~Sample(){
		cout << "Reached destructor" << endl;
	}
};

int main(){

	Sample *ptr = new Sample();
	ptr->showData();
	delete ptr;

	cout << endl << "The address of ptr = " << &ptr << endl;
	cout << endl << "The address of the object pointed by ptr = " << ptr << endl;

	return 0;
}