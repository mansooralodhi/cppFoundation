#include <iostream>
using namespace std;


// observation 1: the size of data in a variable_x is not equivalent to the size of 
// variable_y storing the address of variable_x.

// observation 2: the size of struct is not equivalent to the sum of sizes of the dataypes in struct.
// the size of struct is always higher than the sum of its individual dataypes. this is due to some compilation
// elements that appear when the code is compiled to perform sizeof operation. 

struct student{
    int class_no;
    string name;
};

void display_datatypes_size(){
    cout << "int --> " << sizeof(int) << endl; 
    cout << "short int --> " << sizeof(short int) << endl; 
    cout << "float --> " << sizeof(float) << endl; 
    cout << "char --> " << sizeof(char) << endl; 
    cout << "string --> " << sizeof(string) << endl; 

};

int main(){

    display_datatypes_size();

    int age;
    int *agePt = &age; 
    cout << "age size : " << sizeof(age) << endl;
    cout << "** age pointer/address size : " << sizeof(agePt) << endl; 
    cout << "struct size :  "  << sizeof(student) << endl;    
    return 0;

};