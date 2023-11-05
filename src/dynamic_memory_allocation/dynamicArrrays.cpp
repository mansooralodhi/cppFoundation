#include <iostream>
using namespace std;

/*
- arrays are nothing but points which can be accessed through indexing or direct addressing
- observe: delete operator removes the value at the address but pointer still points at the 
        same memory location, this is called 'dangling pointer problem'. 
-'daling pointer reference' is the reference to same memory location that has been deallocated.
- tha above problem can be solved by setting the pointer to nullptr.
*/

void display_array(int *array, int size){
    cout << "[";
    for (int i=0; i<size; i++){
        cout << array[i] << ", ";
        // cout << *(array + i) << ", ";  // same as above.
    }
    cout << "]" << endl;
}

int main(){

    int *ptArray  = nullptr;
    int arraySize;

    cout << "Array Size : ";
    cin >> arraySize;
    cout << "Array Size = " << arraySize << endl;

    ptArray = new int[arraySize];

    for(int ct=0; ct <arraySize; ct++){
        cout << "Enter the array element " << ct <<  " :  ";
        cin >> ptArray[ct];
        // cin >> *(ptArray+ct); // same as the above 
    }
    
    cout << "Your final array : "; display_array(ptArray, arraySize);

    cout << "Memory Adress of Pointer Before Deletion: " << ptArray << endl;
    delete []ptArray; 
    cout << "Memory Adress of Pointer After Deletion:  " << ptArray << endl;
    cout << "Value at Memory Location After Deletion: " <<  *ptArray << endl;
    ptArray = nullptr;
    cout << "Memory Adress of Pointer After Set To Null:  " << ptArray << endl;
    



}