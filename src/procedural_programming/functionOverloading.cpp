#include <iostream>
#include <string>
using namespace std;

/* 
Functions can only be overloaded based on their 
signatures which involves their 
- no of parameters
- datatype of parameters 
- return type
*/

// overloading based on no. of arguments
string nameConcatenate(string a);
string nameConcatenate(string a, string b);

// overloading based on datatye of arguments
void personTaxInfo(string name, int tax);
void personTaxInfo(int tax, string name);

// overloading based on return type
int getMax(int x, int y);
float getMax(int x, float y);
float getMax(float x, float y);


int main(){

    int tax = 2500;
    string fullName, firstName = "Micheal", lastName="Chorleone";
    
    fullName = nameConcatenate(firstName);
    fullName = nameConcatenate(firstName);
    fullName = nameConcatenate(firstName, lastName);    
    
    personTaxInfo(fullName, tax);
    personTaxInfo(tax, fullName);

    int a=7, b=2;
    float c=9.9, d=5.8;
    cout << "Maximum : " << getMax(a, b) << endl;
    cout << "Maximum : " << getMax(c, d) << endl;
    cout << "Maximum : " << getMax(a, c) << endl;

    return 0;
}

int getMax(int x, int y){
    return (x>y) ? x : y;
}

float getMax(float x, float y){
    return (x>y) ? x : y;
}

float getMax(int x, float y){
    return (x>y) ? x : y;
}

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

