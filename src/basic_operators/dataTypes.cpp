

#include <iostream>
#include <cstdio>

using namespace std;

// Int ("%d"): 32 Bit integer
// Long ("%ld"): 64 bit integer
// Char ("%c"): Character type
// Float ("%f"): 32 bit real value
// Double ("%lf"): 64 bit real value

int main(){
    int a;
    long b;
    char c;
    float d;
    double e;

    cout << "Enter values as per the order in code : ";
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("Integer: %d \nLong: %ld \nChar: %c \nFloat: %.3f \nDouble: %.9lf", a, b, c, d, e);
    

}