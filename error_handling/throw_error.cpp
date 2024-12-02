#include <iostream>
#include <string>
using namespace std;


int main(){


	try{

		throw "Error has been occured";
	}
	catch (const char *msg){
		cout << msg << endl;
	}


	try{

		throw 23;
	}
	catch(const char* msg){
		cout << "Error = " << msg << endl;
	}
	catch(const int msg){
		cout << "The error that occured is " << msg;
	}

	return 0;
}