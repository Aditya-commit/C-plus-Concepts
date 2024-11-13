#include <iostream>
using namespace std;


void swapa (int & , int &); // CALL BY REFERENCE
void swapb (int & , int &); // CALL BY REFERENCE

int main(){

	int a=10,b=20;

	swapa (a , b);

	cout << a << b;
	return 0;

}

void swapa (int &x , int &y){

	swapb(x , y);
}

void swapb (int &x , int &y){

	int temp = y;
	y = x;
	x = temp;
}