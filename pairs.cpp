#include <iostream>
#include <utility>
using namespace std;


int main(){

	pair<int , int> p = make_pair(1 , 3);

	pair<int , int> q = {4  ,5};

	cout << p.first << " " << p.second << endl;
	cout << q.first << " " << q.second << endl;
	return 0;
}
