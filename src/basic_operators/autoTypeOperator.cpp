#include <iostream>
using namespace std;

/* initialization is neccessary with operator auto. */


float total(){
    return 999.99;
}

int main(){

    auto name = "Mnsoor"; 
    auto age = 25;
    auto totalVar = total();

    cout << "Name      :  " << name << endl; 
    cout << "Age       :  " << age << endl; 
    cout << "Total     :  " << totalVar << endl; 

}