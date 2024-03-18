#include <stdio.h>
int main(){
    // printf function doesn't print the double qoute
    printf("I love C programming");
    printf("\n");
    //print 2 number after the decimal number for float and double data type respectively

    float number1 = 36.43;
    double number2 = 86.9375;

    // print the variables up to 2 decimal places
    printf("%.2f", number1);
    printf("\n");
    printf("%.4lf", number2);

    //Print Multiple Variables Together

    int roll = 939367;
    float salary = 60007.76;

    printf(" roll is %d \n salary is %f", roll, salary);

    return 0;
}
