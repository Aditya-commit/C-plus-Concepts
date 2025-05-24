#include <iostream>
#include <list>
using namespace std;


int main(){


	list<int> mylist;


	mylist.push_back(20);
	mylist.push_back(30);


	// NOTE : THEY LACK DIRECT ACCESS TO THE ELEMENTS



	cout << "Accessing the front element of the list " << mylist.front() << endl;



	list<int>::iterator it1 = mylist.begin();

	it1++; // THIS WILL TAKE THE ITERATOR TO THE NEXT ELEMENT THAT IS 2nd ELEMENT OF THE LIST

	*it1 = 434;  // THIS WILL UPDATE THE SECOND ELEMENT

	for(list<int>::iterator it = mylist.begin() ; it != mylist.end() ; ++it){

		cout << *it << endl;
	}


	return 0;
}