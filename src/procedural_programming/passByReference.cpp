#include <iostream>
using namespace std;


// pass by value
void update_weight(int weight){
    cout << "Memory address of 'weight' in update : "<< &weight << endl;
    cout << "Observe the address difference ! " << endl;
    weight += 1;
}

// pass by reference
void update_age(int &age){
    cout << "Memory address of 'age' in update : "<< &age << endl;
    cout << "Observe, same address ! " << endl;
    age = age + 10;
}

// pass by 
void update_height(int *height){
    cout << "Memory address of 'height' in update : "<< height << endl;
    cout << "Observe, same address ! " << endl;
    *height  = *height + 10;
}

int main(){

    int age=500;
    cout << "My old age is "<< age << endl;
    cout << "Memory address of 'age' in main : "<< &age << endl;
    update_age(age);
    cout << "My new age is "<< age << endl;

    int weight=80;
    cout << "My old weight is "<< weight << endl;
    cout << "Memory address of 'weight' in main : "<< &weight << endl;
    update_weight(weight);
    cout << "My new weight is "<< weight << endl;

    int *height;
    *height = 2;
    cout << "My old height is "<< *height << endl;
    cout << "Memory address of 'height' in main : "<< height << endl;
    update_height(height);
    cout << "My new height is "<< *height << endl;

}