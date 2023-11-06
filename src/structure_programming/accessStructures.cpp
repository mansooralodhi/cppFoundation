#include<iostream>

using namespace std;

                                            // below we create a datatype called Person:
struct Person{
    string name;
    int height;
    int yearOfBirth;
} mansoor, fatima;                          // method of declaring the dataype Person(struct) with global scope

void display(Person per);
void display(Person *);

int main(){

    Person burhan = {"bur", 30, 2000};   // method of declaring and initializing dataype Person(struct) with local scope
    
    Person fareeha;                         // method of declaring datatype Person(struct) with local scope
    fareeha.name = "far";
    fareeha.height = 5;
    fareeha.yearOfBirth = 1800;
    
    Person *fatimaPtr;                      // method of declaring a pointer of datatype Person(struct) 
    fatimaPtr = &fatima;
    fatimaPtr->name = "fat";             // method of initializing the pointer of datatype Person(struct)
    fatimaPtr->yearOfBirth = 1900;

    display(fatimaPtr);                     // calling the pointer function
    display(fatima);                        
    display(&fatima);
}

void display(Person person){
    // this function is run when person arugment is a datatype of Person (struct)
    cout << "Running simple Person" << endl;
    cout << "Person info: " << endl;
    cout << "Name: " << person.name << endl;
    cout << "Height: " << person.height << endl;
    cout << "Birth: " << person.yearOfBirth << endl << endl;

    person.yearOfBirth = 0000;              // note: this change will NOT be reflected outside the function, whoever
                                            // is calling this function.
}      

void display(Person *person){
    // this function is run when person arugment is an address or pointer-of-dataytype Person (struct)
    cout << "Running pointer Person" << endl;
    cout << "Person info: " << endl;
    cout << "Name: " << person->name << endl;
    cout << "Height: " << person->height << endl;
    cout << "Birth: " << person->yearOfBirth << endl << endl;

    person->yearOfBirth = 0000;              // note: this change will be reflected outside the function, whoever
                                            // is calling this function.
}
