#include <iostream>
using namespace std;



int main(){

	int arr[2] = {23 , 4}; // STATIC MEMORY ALLOCATION
	int *ptr_arr = new int[5]; // DYNAMIC MEMORY ALLOCATION

	ptr_arr[0] = 10;

	cout << *ptr_arr << endl;
	cout << arr[0];

	delete [] ptr_arr; // RETURNING THE MEMORY BACK 

	return 0;
}