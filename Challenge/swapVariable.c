#include <stdio.h>
int main(){

    float currentSalary = 78.90;
    float updateSalary = 80.76;

    // need a temporary salary for excute current salary
    float temporarySalary = currentSalary;

    //assign updateSalary to current salary
    currentSalary = updateSalary;

    // assign the current salary to updated salary
    updateSalary = temporarySalary;

    // print the current and updated salary

    printf("current salary: %f", currentSalary);
    printf("\n");
    printf("updated salary: %f", updateSalary);

    printf("\n");

    double x = 32.43;
    double y = 54.32;

    double t = x;

    x = y;
    y = t;
    printf("x = %.2lf\n", x);
    printf("y = %.2lf\n", y);
    return 0;
}

