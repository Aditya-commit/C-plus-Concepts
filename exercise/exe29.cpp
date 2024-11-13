#include <iostream>
using namespace std;


int main(){


	const int MAXROW = 4;
	const int MAXCOL = 3;


	int (*p)[MAXCOL];

	p= new int[MAXROW][MAXCOL];


	cout << sizeof(p) << " " << sizeof(*p) << endl << sizeof(MAXCOL) << endl << sizeof(MAXROW);

	return 0;
}