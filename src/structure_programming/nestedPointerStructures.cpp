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
    company Employer;
    family_members *relationships;
};


int main(){
    // note: we cannot directly declare or initiate a nested struct pointer
    // the only way is to create an object/variable of type (main) struct
    // and in parallel declare and instantiate a pointer of type struct

    //accessing nested struct through pointers:
    employee Mansoor {"Mansoor", 05214, "KPMG", "London"};
    
    employee *MansoorPt = &Mansoor;
    
    MansoorPt->taxNumber = 0000;
    
    cout << MansoorPt->taxNumber << endl;
    cout << MansoorPt->Employer.name << endl;

    //accessing nested pointer struct through pointers:
    family_members familyMembers {"myFather", "myMother"};
    
    MansoorPt->relationships = &familyMembers; 

    cout << MansoorPt->name << endl;
    cout << MansoorPt->relationships->father << endl;
       

}