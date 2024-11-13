#include <iostream>
using namespace std;

void fun2(void);
int main(){

	void fun1(void);

	fun1();

	return 0;
}
void fun1(void){
	fun2();
	cout << endl << "Hi...Hello";
}
void fun2(void){
	cout << endl << "to you";
}