#include<iostream>
using namespace std;

struct company{
    string name;
    string headquarters;
};
 
struct family_members{
    string father;
    string mother;
};

struct employee{
    string name;
    int taxNumber;
    family_members relationships;
    company *Employer;
};


int main(){
    // note: we cannot directly declare or initiate a struct pointer
    // the only way is to create an object/variable of type struct
    // and in parallel declare and instantiate a pointer of type struct
    employee Mansoor {"Mansoor", 05214, "KPMG", "London"};
    employee *MansoorPt = &Mansoor;
    MansoorPt->taxNumber = 0000;
    cout << MansoorPt->taxNumber << endl;
    cout << MansoorPt->Employer.name << endl;
    

}