#include<iostream>
using namespace std;

void loop(){
    for (int i=1; i<5; i++){
        static int cont = 0;    
        cout <<"counter in loop value: "<< ++cont << endl;
    }
}
void display(){
    static int cont = 0; 
    static float floatCounter =  5;

    cout << "static int variable value: " << ++cont << endl; 
    cout << "static float variable value: " << ++floatCounter << endl; 

}
int main(){
    /*
    observe:
    - static variable inside loop() is also executed only once. 
    - static variable inside display() is executed only once.
    - static variable, whereever defined is only executed once,
        however, the variables remain local. 
        
    */
    loop();
    loop();
    display();
    display();
    display();
    display();


}