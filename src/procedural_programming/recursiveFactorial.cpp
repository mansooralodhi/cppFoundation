#include<iostream>
using namespace std;


int calculateFactorial(int x){
    if (x==1) return 1;
    else return x * calculateFactorial(x-1);
}

int main(){
    int factOf = 5;
    cout << "Factorial of  " << factOf << " is  " << calculateFactorial(factOf) << endl;
} 