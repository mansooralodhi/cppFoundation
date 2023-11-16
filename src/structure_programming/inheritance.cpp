#include<iostream>
using namespace std;

struct company{
    string name;
    string headquarters;
    void introduction(){
        cout << 
        "Company name:  " << name << ", " <<
        "Headquarter:  " << headquarters << endl; 
    } 
};

struct employee : company{
    string name;
    int taxNumber;
    void introduction(){
        cout << 
            "Company name:  " << name << ", " << endl <<
            "Headquarter:  " << headquarters << ", " << endl <<
            "taxNumber: " << taxNumber << ", "<< endl <<
            "Employee Name: " << name << ", " << 
        endl;   
    } 
};


int main(){
    employee Mansoor {"Mansoor", "LONDON", "KPMG", 2536};
    Mansoor.introduction();
    // cout <<  << endl;

}

