#include <iostream>
#include <string>
using namespace std;


class User{
private:

	int i;
	float f;
	char c;

public:
	void displayData(){
		cout << i << '\n' << f << "\n" << "char is" << c << endl;
	}
};



int main(){

	cout << "Size of user class" << sizeof(User) << endl;

	User u1;

	cout << sizeof(u1) << endl;

	u1.displayData();


	return 0;
}