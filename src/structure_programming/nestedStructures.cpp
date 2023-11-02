#include<iostream>
using namespace std;

struct company{
    string name;
    string headquarters;
};

struct employee{
    string name;
    int taxNumber;
    company Employer;
};


int main(){
    employee Mansoor {"Mansoor", 05214, "KPMG", "London"};
    cout << Mansoor.Employer.name << endl;

}

