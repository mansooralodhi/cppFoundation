#include<iostream>
using namespace std;

template <typename typeA, typename typeB> typeB getMax(typeA x, typeB y){
    return (x<y) ? x : y;
}

int main(){

    cout << getMax(10.01, 12) << endl;      // returns 10 (int) 
    cout << getMax(10.01, 12.01) << endl;   // returns 10.01 (float)
    
    return 0;
}