#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n = 7;
    int arr[n] = {5, 9, 4, 1, 10, 13, 15};
    
    // declare empty vector of integers
    vector<int>v; 
    
    // insert arr elements in vector v:
    for (int i=0; i<n; i++){
        v.push_back(arr[i]);
    }

    // remove elements 9 to 13
    int beginIndex = 2, endIndex = 6;
    v.erase(v.begin() + beginIndex - 1, v.begin() + endIndex);

    // print elements in vector v:
    for (size_t i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    // output:  5 15 
    
    
}