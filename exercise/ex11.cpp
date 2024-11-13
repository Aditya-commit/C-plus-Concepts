#include <iostream>
using namespace std;

int main(){

	enum result { first , second , third };

	result a = first;

	int b = a;

	result c = 1;

	result d= result (1);

	return 0;
}