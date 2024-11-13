#include <iostream>
using namespace std;

void display(char ch='*' , int num=80);

int main(){

	display('*' , 5);
	display('-' , 15);
	display('=' , 20);

	return 0;
}

void display(char ch , int num){

	for(int i =0 ; i<=num;i++){

		cout << ch;
	}

	cout << endl;
}