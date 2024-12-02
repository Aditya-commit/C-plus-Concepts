#include <iostream>
using namespace std;


int main(){

	char str[] = "The boring stuff";
	const char *p = "That's interesting";

	cout << endl << str;
	cout << endl << p;

	cout << endl << (void *)str;
	cout << endl << (void *)p;

	return 0;
}