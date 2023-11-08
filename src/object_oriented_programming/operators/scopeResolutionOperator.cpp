#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        string static insurnce;
        void info();
        void displayInfo();
};


// not possible below uncless attribute is type 'static': 
string Student::insurnce = "coracle";

void Student :: info(){
    cout << "info ";
}

void Student :: displayInfo(){
    info();
    cout << name << endl;
    /*
    OR
    Student :: info();
    cout << Student :: name << endl;
    same result as above:
    */
}

int main (){

    /*method 1:
    syntax:     className objName;
    object get stores in a stack.
    */
    Student mal;
    mal.name = "Micheal";
    mal.displayInfo(); 

    /*method 2:
    syntax:     className *objName = new ClassName()
    object will be allocated a heap (dynamic memory allocation).
    */ 
    Student *kia = new Student(); 
    kia->name = "Chorleone";
    kia->displayInfo();

    return 0;
}