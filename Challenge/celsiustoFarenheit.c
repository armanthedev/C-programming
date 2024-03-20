#include <stdio.h>
int main(){

    //farenheit = (celsius * 1.8) +32;
    double celsius;
    double fahrenheit;

    // take temperature in degree celsius input from the user
    printf("please enter the degree in celsius: ");
    scanf("%lf",& celsius);

    // convert celsius temperature to fahrenheit using the formula

    fahrenheit = (celsius * 1.8) + 32;

    // print the temperature in fahrenheit
    printf("%.2lf", fahrenheit);

    return 0;

}
