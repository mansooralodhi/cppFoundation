#include <iostream>
using namespace std;

/*
Take Aways:
- classes do have default destructor.
- deleting an object does delete its attributes and properties.
- one cannot delete an object that was not allocated with new keyword.
- objects created without new have their default destructor called when
    their scope ends.
Questions:
- why cannot we perform the below task in private but only in constructor
    name = new string; 
    rollno = new int;
- why do we neeed to free resources (each dynamic variable) when we can delete 
  the object itself ???
*/
class Teacher{
    private:
        string name = "masnor";
        int age = 45;
    public:
        void display_var(){
            cout << "Name "<< name << " has age " << age << endl;
        }
        Teacher(){
            display_var();
        }
};

class Student{
    private:
        string *name;
        int *rollno;
        /*
        Question: why cannot we perform the below task here but in constructor ?
        name = new string; 
        rollno = new int;
        */
    public:
        Student(string myname, int myrollno){
            name = new string; 
            rollno = new int;
            *name = myname;
            *rollno = myrollno;
            display_var();
        }
        ~Student(){
            /*
            why do we need to call variables when we can delete
            the variable ??? 
            */
            delete name, rollno;
        }
        void display_var(){
            cout << "Student  " << *name << " has rollno.  "  << *rollno << endl;
        }
};

int main(){
    Teacher *fayyaz = new Teacher();
    fayyaz->display_var();
    delete fayyaz;

    Student *man = new Student("lodhi", 56);
    man->display_var();
    delete man;

}