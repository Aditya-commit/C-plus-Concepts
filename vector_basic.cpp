#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> v1 = {34}; // [34]

    vector<int> v2(3 , 0); // [0 , 0 , 0]

    vector<int> v3 = {34 , 12 , 43 ,44};

    cout << v1[0];

    cout << v2[0];
    cout << v2[1];
    cout << v2[2];

    v2.push_back(34);
    v2.emplace_back(35); // THIS IS FASTER THAN push_back()


    for(int val : v3){

        // HERE val IS NOT THE INDEX BUT THE VALUE ITSELF
        cout << endl << val;
    }



    cout << endl << endl << endl;


    vector<int>::iterator begin_iter = v3.begin();

    cout << *(begin_iter); // THIS RETURN THE ITERATOR POINTING TO THE FIRST ELEMENT OF THE VECTOR

    vector<int>::iterator end_iter = v3.end();
    cout << endl << *(end_iter) << endl; // THIS RETURN THE POINTER PAST THE LAST ELEMENT OF THE VECTOR (MAYBE MEMORY)
    cout << *(end_iter-1) << endl; // THIS RETURNS THE LAST ELEMENT OF THE VECTOR AND SO ON 


    return 0;
}