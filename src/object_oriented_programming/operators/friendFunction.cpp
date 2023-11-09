#include <iostream>
using namespace std;

/*friend function helps in defining the function outside class and accessing private
members through the function, without using the scpoe resolution operator. */

class Teacher{
    string name;
    int age;
    public:
        Teacher(string myname, int myage){
            name = myname;
            age = myage;
        }
        friend void display(Teacher);
        /*
        if display is defined in the class we don't need to make it 'friend'
        and neither pass the argument of type Teacher. 
        { cout << "My name is  " << name << " and my age is  " << age << endl; }
        */
};

/*note: we cannot access the private objects without class object.*/
void display(Teacher minhas){ 
    cout << "My name is  " << minhas.name << " and my age is  " << minhas.age << endl;
    }


int main (){
    Teacher minhas("mihas ", 40);
    display(minhas);
    return 0;
}