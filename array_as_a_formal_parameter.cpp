#include <iostream>
using namespace std;


double getAvg(int arr[] , int size){

    int total_sum = 0;


    // THIS IS WRONG WE CAN'T ACCESS THE SIZE OF THE ARRAY WHEN THEY ARE PASSED AS AN ARGUMENT
    // for(int i = 0 ; i < (sizeof(arr) / sizeof(arr[0])); i++){

    //     total_sum += arr[i];
    // }

    for(int i =0 ; i < size ; i++){
        total_sum+=arr[i];
    }


    return total_sum/size;
}



int main(){

    int numbers[5] = { 23 , 44 , 11 , 54 ,6};

    double avg;

    avg = getAvg( numbers , sizeof(numbers)/sizeof(numbers[0]));

    cout << "The average is = " << avg;
}