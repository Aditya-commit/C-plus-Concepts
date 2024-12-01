#include <iostream>
#include <fstream>
using namespace std;


int main(){

	fstream file;

	char text[100];

	cout << "Please enter something" << endl;

	cin.getline(text , 100);

	file.open("file1.txt" , ios::app);

	if(file.is_open()){

		file << text;

		cout << file.rdstate();
		cout << file.good();
		cout << file.bad();
		cout << file.fail();
		cout << file.eof();
		file.close();
	}
	else{
		cout << "File could not be opened";
	}


	return 0;
}