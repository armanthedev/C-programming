#include<stdio.h>
int main(){

 int age;
 double phone;
 float visa_ratio;
 char name;

 printf("Enter your age: ");
 scanf("%d", &age);

 printf("Enter your visa ratio: ");
 scanf("%f", &visa_ratio);

 printf("Enter your phone number: ");
 scanf("%1f", &phone);

 printf("Enter your name: ");
 scanf("%c ", & name);

 printf(" age: %d\n phone: %1f\n visa ratio: %f\n name: %c");

 int number1 = 33;
    double number2 = 67.54;

    // take number inputs
    scanf("%d", &number1);
    scanf("%lf", &number2);

    // write code to print output
    printf("%d\n", number1);
    printf("%.2lf", number2);

    return 0;

 return 0;


}
