#include <iostream>
#include <string>
using namespace std;

/* 
Functions can only be overloaded based on their 
signatures which involves their 
- no of parameters
- datatype of parameters 

Signature does not involve return type.
*/

// overloading based on no. of arguments
string nameConcatenate(string a);
string nameConcatenate(string a, string b);

// overloading based on datatye of arguments
void personTaxInfo(string name, int tax);
void personTaxInfo(int tax, string name);

/*  
not possible overloading based on return type 
uncomment all below file comments to observe.
*/

// int getMax(float x, float y);
// float getMax(float x, float y);


int main(){

    int tax = 2500;
    string fullName, firstName = "Micheal", lastName="Chorleone";
    
    fullName = nameConcatenate(firstName);
    fullName = nameConcatenate(firstName);
    fullName = nameConcatenate(firstName, lastName);    
    
    personTaxInfo(fullName, tax);
    personTaxInfo(tax, fullName);

    // float c=9.9, d=5.8;
    // cout << "Maximum : " << getMax(c, d) << endl;

    return 0;
}

// int getMax(float x, float y){
//     return (x>y) ? x : y;
// }

// float getMax(float x, float y){
//     return (x>y) ? x : y;
// }

void personTaxInfo(int tax, string name){
    cout << name  + " payed tax " << tax << endl;
}

void personTaxInfo(string name, int tax){
    cout << name  + " payed tax " << tax << endl;
}

string nameConcatenate(string a){
    return a;
}

string nameConcatenate(string a, string b){
    return a + " " + b;
}

