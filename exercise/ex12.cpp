#include <iostream>
using namespace std;

int a = 10;
int main(){
	int a=20;

	{
		int a = 30;
		cout << a << ::a << ::::a;
	}

	return 0;
}