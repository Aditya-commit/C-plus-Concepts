#include <iostream>
#include <list>
using namespace std;





int main(){

    list<int> l1 {34 , 11 , 43 };
    list<int> l2;

    
    
    
    
    list<int>::iterator begin_iter = l1.begin();

    cout << *begin_iter << endl; // RETURNS THE ITERATOR POINTING TO THE FIRST ELEMENT OF THE LIST

    
    
    
    list<int>::iterator end_iter = l1.end();

    cout << *(--end_iter) << endl; // RETURNS THE ITERATOR POINTING TO THE PAST-THE-END ELEMENT IN LIST CONTAINER SO TO ACCESS THE LAST ELEMENT YO UHAVE TO MOVE BACK BY 1




    cout << l1.empty() << endl;
    cout << l2.empty() << endl;



    cout << l1.size() << endl;
    cout << l2.size() << endl;



    
    
    
    cout << l1.max_size() << endl;
    cout << l2.max_size() << endl;












    cout << "the first element is " << l1.front() << endl; // UNLIKE ITERATOR THIS RETURNS THE DIRECT REFERENCE TO THE FIRST ELEMENT OF THE LIST
    cout << "the first element of second list is " << l2.front() << endl; // NEVER CALL THIS FUNCTION ON EMPTY LISTS







    cout << "The last element is " << l1.back() << endl; // UNLIKE list::end WHICH RETURNS ITERATOR PAST-THE LAST ELEMENT THIS RETURNS THE DIRECT REFERENCE TO THE LAST ELEMENT OF THE LIST







    l1.emplace_front(59); // THIS METHOD IS MORE EFFECIENT THAT PUSH_FRONT BUT USE THIS WHEN YOU ARE CONSTRUCTING COMPLEX OBJECTS BUT FOR SIMPLE TYPES USE PUSH_FRONT
    cout << l1.front() << endl;




    l1.emplace_back(159); // THIS METHOD IS MORE EFFECIENT THAT PUSH_BACK BUT USE THIS WHEN YOU ARE CONSTRUCTING COMPLEX OBJECTS BUT FOR SIMPLE TYPES USE PUSH_BACK
    cout << l1.back() << endl;






    l1.insert(++begin_iter , 2); // INSERT AFTER POSITION 1 (ELEMENT = 2)


    for(int val : l1){
        cout << val << " ";
    }



    return 0;
}