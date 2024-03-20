#include <stdio.h>
int main(){

    double currentSalary = 78.90;
    double updateSalary = 80.76;

    // need a temporary salary for excute current salary
    double temporarySalary = currentSalary;

    //assign updateSalary to current salary
    currentSalary = updateSalary;

    // assign the current salary to updated salary
    updateSalary = temporarySalary;

    // print the current and updated salary

    printf("current salary: %lf", currentSalary);
    printf("\n");
    printf("updated salary: %lf", updateSalary);


}

