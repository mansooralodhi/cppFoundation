#include<iostream>
#include<string>

using namespace std;

/*
Here, templates functions are overloaded with concreate function datatypes.
therefore its called explicitFunctionOverloading.
For code to overload templates themselves with different signature, 
refer to code file templatesOverloading.cpp.
*/

template <typename customType>
void display(customType x){
    cout << "My Name is  " << x << ", template function !" <<  endl;
}

// overloading version 1
template <> void display (string x){
    cout << "My Name is  " << x << ", template overloaded function !" <<  endl;
}

// overloading version 2 (priority over version 1)
void display(string x){
    cout << "My Name is  " << x << ", non-template function !" <<  endl;
}


int main(){
    string name="Khan";
    float val=25.36;
    display(val);
    display(name);
    return 0;
}
