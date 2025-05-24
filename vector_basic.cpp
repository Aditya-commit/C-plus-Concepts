#include <iostream>
#include <vector>
using namespace std;


// WHEY SHOULD WE USE VECTORS ?
// INTERNALLY VECTORS HAVE ARRAYS WHICH ARE REALLOCATED WHEN THE CAPACITY OF THE ARRAYS ARE EXCEEDED . NOW SINCE THIS IS A EXPENSIVE TASK THEREFORE TO OVERCOME THIS VECTORS PROVIDE CAPACITY MUCH LARGER THAN THE ACTUAL SIZE NEEDED TO STORE THE ELEMENT SO THAT IF WE WANT TO ADD MORE ELEMENTS IN THE FUTURE WE DO NOT HAVE TO REALLOCATE AGAIN AND AGAIN.


// WHEN SHOULD WE USE VECTORS ?
// Compared to the other dynamic sequence containers (deques, lists and forward_lists), vectors are very efficient accessing its elements (just like arrays) and relatively efficient adding or removing elements from its END. For operations that involve inserting or removing elements at positions other than the end, they perform worse than the others, and have less consistent iterators and references than lists and forward_lists.



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



    // WHEN YOU WANT TO PREVENT THE MODIFICATIONS OF THE VECTOR ELEMENTS USE CBEGIN INSTEAD OF BEGIN()

    return 0;
}