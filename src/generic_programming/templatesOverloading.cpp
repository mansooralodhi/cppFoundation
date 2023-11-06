#include <iostream>
#include <string>
using namespace std;

template <typename T> void display(T a) {cout << "Template 1 ! " << endl;}

// overloading by no. of arguments
template <typename T> void display(T a, T b) {cout << "Template 2 ! " << endl;}

//  overloading by type of arguments
template <typename T, typename T1> void display(T a, T1 b) {cout << "Template 3 !" << endl;}

// note: overloading not possible by return type
// template <typename T> T display(T a) {cout << "Template 5 ! "<< endl; return a;}


int main(){
    string firstName="Khan";
    float tax=25.36, income=1000;

    display(firstName);
    display(tax, income);
    display(firstName, income);

    
    return 0;
}