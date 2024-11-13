#include <iostream>
using namespace std;


class Student{
	private :

		int m1 , m2, m3;
		float per;

	public:

		Student(){
			m1 = m2=m3=0;
			per=0.0;
		}

		void calcPer(int x , int y , int z){

			m1=x;m2=y;m3=z;
			per = (m1 + m2 + m3)/3.0;
			displayPer();
		}

		void displayPer(){
			cout << "Percentage = " << per << "%" << endl;
		}
};


int main(){

	Student s1;
	s1.displayPer();
	s1.calcPer(35 , 35 , 35);
	s1.displayPer();
	return 0;
}