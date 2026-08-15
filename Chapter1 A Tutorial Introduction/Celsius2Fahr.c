//This is the Exercise from book chaper 1 with the title "Celsius to Fahrenheit Conversion".
#include <stdio.h>
int main(){
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;

    while(celsius <= upper){
        fahr = (celsius * 9/5) + 32;
        printf("%3.1f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}