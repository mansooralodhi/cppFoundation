#include<iostream>
using namespace std;

/*
also refer to functionOverloading.cpp in procedural_programming 
syntax: template <keyword identifier> return_type function_name(parameters){}
keyword -> template OR class
identifier -> a placeholder for the datatype of parameters that function takes.
*/

template <typename customType> void display(customType print){
    cout << print << endl;
}

int main(){

    display(2);
    display(0.01);
    display(92.08);
    display("Hy !");

    return 0;
}