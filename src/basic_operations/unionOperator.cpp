
#include <iostream>

// in union, memory is shared among memebers of same datatype so at any given time only 1 member of
// same datatype can store the data.

using namespace std;


union employee{
    int id;
    int age;
    float salary;
    float bonus;
    char name;
    char sex;

}mansoor, lodhi;

void display_employee_data(employee);

int main(){

    mansoor.bonus=25;
    mansoor.id=12;
    mansoor.name='M';
    display_employee_data(mansoor);
    return 0;
}

void display_employee_data(employee emp){
    cout << emp.id << endl;
    cout << emp.age << endl;
    cout << emp.salary << endl;
    cout << emp.bonus << endl;
    cout << emp.name << endl;
    cout << emp.sex << endl;
}
