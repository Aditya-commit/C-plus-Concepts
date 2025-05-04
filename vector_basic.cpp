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

    return 0;
}