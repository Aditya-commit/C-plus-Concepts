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

// WE CANNOT ACCESS ELEMENTS IN A QUEUE (IT DOES NOT PROVIDE RANDOM ACCESS ITERATION)

// You also cannot iterate over a queue like this:
// ?for (auto x : q)   ❌ Not allowed

// A queue intentionally hides its internal container.


// ALLOWED OPERATION:
// ------------------

// mq.push(x);     // Insert at back
// mq.pop();       // Remove from front
// mq.front();     // First element
// mq.back();      // Last element
// mq.empty();
// mq.size();

// This is why a queue is called an adapter—it restricts access to enforce FIFO behavior.