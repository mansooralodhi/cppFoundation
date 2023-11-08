#include<iostream>
using namespace std;


/*
One has to be carefull while overloading a constructor/function to make sure 
no two or more constructors are called during object instantiation. 
Secondly, contructor cannot be private, else error.
Third, class with no constructor has a default constructor.
*/

class Professor{

public:
    string name, position;
 
    Professor(){
        cout << "Empty Constructor." << endl;
    }
 
    Professor(string name){
        cout << "Name : " << name <<  endl;
    }

    Professor(string name, string position="professor"){
        cout << "Name : " << name << " & Position : " << position << endl;
    }

};

int main(){
    
    Professor roomi; 
    Professor leg("lodhi", "Assistant Professor");
    
    /*
    Error Example:
    
    Professor hand("fyyaz"); 
    
    This above constructor calls:
    Professor(string name) and 
    Professor(string name, string position="professor")
    at the sametime resulting in error.
    */

    return 0;
    
    }