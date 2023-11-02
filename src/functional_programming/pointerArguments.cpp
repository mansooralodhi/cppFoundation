#include<iostream>

using namespace std;

void display(int *start, int *end);

int main(){

    int length = 10;
    int numbers[] {88, 44, 22, 55, 67, 87, 98, 76, 98, 76};

    int *start = &numbers[4];
    int *end = &numbers[7];

    cout << "Numbers : " << numbers[3] << endl;
    cout << "start : " << start << endl;
    cout << "end : " << end << endl;

    display(start, end);

    return 0;
}

void display(int *start, int *end){
    for (int *i=start;  i!=end; i++){
        cout << *i << endl;
    }
}