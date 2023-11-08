#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        void displayInfo(){
            cout << "Student name is " << name << endl;
        }
};

int main (){

    /*method 1:
    syntax:     className objName;
    object get stores in a stack.*/
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