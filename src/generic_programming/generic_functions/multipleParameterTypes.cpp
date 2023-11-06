#include<iostream>
using namespace std;

/* define as much identifiers (typeA, typeB) as (different) parameter dataypes.  */

/*
the below generic function will not run for different parameter datatypes:

template <typename typeA, typename typeB> void display(typeA x, typeA y){
    cout << "X: " << x << ", Y:  " << y << endl; 
    }
*/

template <typename typeA, typename typeB> void display(typeA x, typeB y){
    cout << "X: " << x << ", Y:  " << y << endl;
}

int main(){

    display(10, 1);
    display(10.98, 87);
    display(10, "Micky");

    return 0;
}