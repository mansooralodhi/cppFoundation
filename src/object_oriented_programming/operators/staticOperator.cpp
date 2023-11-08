#include<iostream>
using namespace std;

/*
- static variable of class is shared by all objects (class scope).
- static variables of class cannot be initiated inside class. 
    (error: in-class initialization of static data member)
- static variables cannot be initialized by class object.
    (error: undefined reference)
- static variables should be initialized before creating class objects.
    (error: undefined reference)
- static variables can be updated by class object which is reflected 
    in all other class objects.
- static function is shared by all class objects.
- static function can only access static class variables.
    (error: invalid use of member 'Teacher::age' in static member function)
*/
class Teacher{
    public:
        int age;
        static int objectsCount; 
        Teacher(){
            ++objectsCount;
        }
        ~Teacher(){
            --objectsCount;
        }
        static void display(){
            cout << "Number of Class Objects : "<< objectsCount <<endl;
        }
};
int Teacher::objectsCount=0;

int main(){
    cout << "Initial Object Count: " << Teacher::objectsCount << endl;

    Teacher kl;
    cout << "Object Count after 1 object: " << kl.objectsCount << endl;
    kl.display();

    Teacher *km;
    km = new Teacher();
    cout << "Object Count after 2 object: " << km->objectsCount << endl;

    delete km;
    cout << "An Object Deleted." << endl;

    cout << "Total Object Count: " << Teacher::objectsCount << endl;

    return 0;
}