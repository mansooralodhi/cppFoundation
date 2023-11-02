/*
ternary operator is a short-hand to simple if-else. 

expression ? statement_1 : statement_2

if expression is true then statement_1 will be executed else statement_2 
*/ 

#include<iostream>

using namespace std;

int main(){
    cout << "main" << endl;
    10 > 15 || 5 < 10 && 0 == 1 ? cout<<"true" : cout << "false" << endl;
}