#include <iostream>
using namespace std;

int main(){

	const char *p = "Internet";

	const char *q = p;


	cout << p << q << endl;
	q = "Intranet";
	p = q;
	cout << p << q << endl;

	return 0;
}