#include <iostream>
#include <queue>
using namespace std;



int main(){

    queue<int> mq; // SINCE WE ARE NOT SPECIFYING ANY CONTAINER CLASS THEREFORE IT WILL USE THE DEFAULT DEQUEUE CONTAINER CLASS

    cout << mq.empty() << endl;

    cout << mq.size() << endl;


    mq.push(20);


    cout << mq.front();

    cout << endl;

    // HERE WE CAN'T USE RANGE BASED FOR LOOP

    return 0;
}