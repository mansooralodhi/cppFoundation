#include <iostream>
#include <string>
using namespace std;

/* 
Functions can only be overloaded based on their 
signatures which involves their 
- name
- no of parameters
- datatype of parameters 
Signature does not include return type. 
*/

// overloading based on no. of arguments
string nameConcatenate(string a, string b);
string nameConcatenate(string a, string b, string c);

// overloading based on datatye of arguments
void personTaxInfo(string name, int tax);
void personTaxInfo(int tax, string name);

// Note: what is NOT possible is:
// string nameConcatenate(string a, string b);
// void nameConcatenate(string a, string b, string c);


int main(){

    int tax = 2500;
    string fullName, firstName = "Micheal", middleName="Don", lastName="Chorleone";
    
    fullName = nameConcatenate(firstName,  lastName);
    personTaxInfo(fullName, tax);

    fullName = nameConcatenate(firstName,  middleName, lastName);    
    personTaxInfo(tax, fullName);

    return 0;
}


void personTaxInfo(int tax, string name){
    cout << name  + " payed tax " << tax << endl;
}


void personTaxInfo(string name, int tax){
    cout << name  + " payed tax " << tax << endl;
}

void personTaxInfo(string name, int age, int tax){
    cout << name  << " aged "<< age << " payed tax " << tax << endl;
}

string nameConcatenate(string a, string b){
    return a + " " + b;
}

string nameConcatenate(string a, string b, string c){
    return a + " " + b + " " + c;
}

