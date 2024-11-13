#include <iostream>
#include <string>
using namespace std;


class Date{
	private :
		int day , month , year;

	public:
		Date(){
			day = 7;
			month = 23;
			year = 2019;
		}
};

int main(){
	Date today;
	return 0;
}