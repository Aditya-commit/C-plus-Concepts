#include <iostream>
#include <string>
using namespace std;



class Sample{
	private :

		int data1;
		float data2;

	public:

		Sample();
		void showData(void);
};

Sample::Sample(){
	data1 = 10;
	data2 = 20;
}

void Sample::showData(void){
	cout << data1 << endl << data2;
}


int main(){

	Sample s;

	s.showData();

	return 0;
}