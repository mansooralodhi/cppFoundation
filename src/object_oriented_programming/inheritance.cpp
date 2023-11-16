#include <iostream>
using namespace std;


class Person{
    public:
        string name;
        int age;
};

class Employee : public Person {
    public:
        int id;
        void setId(int myid) {id = myid;}
        void introduce(){cout << "My name is " << name << " & id is " << id << endl;}
};

int main(){
    
    Employee markus;
    // markus.setName("markus");
    // markus.setId(2664);
    markus.name = "markus";
    markus.id = 2664;
    markus.introduce();

}