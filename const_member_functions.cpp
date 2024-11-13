#include <iostream>
using namespace std;

class Sample{
private:
	int data;

public:
	Sample(){
		data=0;
	}
	void changeData() const{
		//data=10; // THIS WILL REPORT IN AN ERROR
		
		cout << "changeData() function cannot modify the class memebers" << endl;
	}
	void showData(){
		cout << endl << "data=" << data << endl;
	}

	void add(Sample const &s , Sample const &t){
		data = s.data + t.data;
		// s.data = 45; // IT WILL THROW AN ERROR AS WE ARE TRYING TO CHANGE THE MEMBER OF A CONST OBJECT
		// t.data = 50; // IT WILL THROW AN ERROR AS WE ARE TRYING TO CHANGE THE MEMBER OF A CONST OBJECT
	}

	void getData(){
		cin >> data;
	}
};


int main(){

	const Sample s1;

	//s1.getData(); // CANNOT CALL NON CONSTANT MEMBER FUNCTION USING A CONST OBJECT
	// s1.showData(); // CANNOT CALL NON CONST MEMBER FUNCTIONS USING A CONST OBJECT
	Sample s2;
	s2.changeData();
	Sample s3;
	s3.changeData();
	Sample s4;
	s4.add(s2 , s3);
	s4.showData();
	return 0;
}