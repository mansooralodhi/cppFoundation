#include <iostream> 
#include <typeinfo>

using namespace std;

int main(){

    int height = 10;
    float width = 20.0;

    int *height_pt;
    height_pt  = &height;
    cout << "height :  " << *height_pt << endl;

     int numbers[4] {34, 3 , 5, 53};
     cout << numbers << endl;
     cout << *(numbers+2) << endl;

}
