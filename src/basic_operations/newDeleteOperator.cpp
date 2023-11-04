#include <iostream>

using namespace std;

/*
lets store a value in dynamical memory.
syntax: new datatype 
- the daynmic memory is allocated from heap.
- we take the help of pointer to point at the allocated memory.
- the pointer will point to (dynamic) memory location.
- we can store the value at the dynamic memory lcoation using the *pointer command.
- we can access the dynamic memory location using value of pointer.
- we can ONLY deallocate the dynamic memory using delete operator.
- the delete command may also remove the values from dynamic memory.
- delete operator doesnot invalidate the pointer (pointer still points).
- user may still access the same dynamic memory using the previous pointer.   
- in order to invalidate the pointer, set it to nullprt.
- note: we cannot declare again the same pointer (name) even after delete or invlidation. 
*/

void printMemoryValueAddress(int *memoryPt){
cout << endl; 
//get the value stored at dynamic memory
cout << "Value at dynamic memory:  " <<  *memoryPt<<endl;
//get the address of dynamic memory
cout << "Address of dynamic memory:  " << memoryPt<<endl;
}


int main(){

int *dynamicMemoryPtr;

dynamicMemoryPtr = new int;         //define the datatype of dynamic memory OR allocate the heap memory

*dynamicMemoryPtr = 1000;           //store some value at dynamic memory

printMemoryValueAddress(dynamicMemoryPtr);

delete dynamicMemoryPtr;

printMemoryValueAddress(dynamicMemoryPtr);

dynamicMemoryPtr = nullptr;

printMemoryValueAddress(dynamicMemoryPtr);

return 0;

}