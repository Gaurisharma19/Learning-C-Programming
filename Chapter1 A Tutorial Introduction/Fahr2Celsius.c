//Initially, the Program was written with int data-type, but it was changed to float data-type to get more accurate results.
//Example: 0 Fahr = -17.8C not -17C

#include <stdio.h>
int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper){
        celsius = 5*(fahr-32)/9;
        printf("%3.1f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}