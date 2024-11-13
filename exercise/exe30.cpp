#include <iostream>
#include <string>

using namespace std;


class String{

private:

	string name;


public:

	String(){

		name = "Aditya";
	}

	String(string name){

		this->name = name;
	}

	void display(void){
		cout << "The string is = " << name << endl;
	}

	void len(void){
		cout << "The total length of the string is = " << name.length() << endl;
	}

	void size(void){

		cout << "The size of string is = " << sizeof(name) << endl;
	}

	void operator + (string s){

		name = name + s;
	}

	void operator += (string s){

		name = name + " " + s;
	}

	void operator = (string s){

		name = s;
	}

	void toLower(void){

		for(int i=0; i<name.length(); i++){
			name[i] = tolower(name[i]);
		}
	}

	void toUpper(void){

		for(int i=0; i<name.length(); i++){
			name[i] = toupper(name[i]);
		}
	}
};

int main(){

	String s1 , s2("Ishu");

	s1.len();

	s2.len();

	s1.size();
	s2.size();

	s1.toUpper();
	s2.toLower();


	s1.display();
	s2.display();

	s1 + "Tomar";

	s2+= "Singh Tomar";

	s1.display();
	s2.display();

	s2 = "Aman";

	s2.display();

	return 0;
}