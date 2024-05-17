#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n =4;
    int arr[n] = {5,9,4,1};
    
    // declare empty vector of integers
    vector<int>v; 
    
    // insert arr elements in vector v:
    for (int i=0; i<n; i++){
        v.push_back(arr[i]);
    }

    // sort 
    sort(v.begin(), v.end());

    // print elements in vector v:
    for (size_t i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    // output: 1 4 5 9 
    
    
}