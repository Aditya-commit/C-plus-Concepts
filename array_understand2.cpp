#include <iostream>
using namespace std;


void xstrcpy (char * , char *);


int main(){

    char str1[] = "Nagpur"; // = {'N' , 'a' , 'g' , 'p' , 'u' , 'r' , '\0'}
    char str2[10];


    cout << str2 << endl;
    xstrcpy(str2 , str1);
    cout << str2 << endl;


    return 0;
}

void xstrcpy ( char *t , char *s){

    // SINCE THIS IS char TYPE YOU WILL RECIEVE HERE THE ENTIRE ARRAY OF CHAR AS STRING

    int counter = 0;

    while(*(s+counter) != '\0'){

        *(t+counter) = *(s+counter);

        counter++;
    }

    *(t+(counter + 1)) = '\0';
}