#include <stdio.h>
#include <stdbool.h>
int main(){

    int num = 120;
    float num2 = 44.54;
    double num3 = 453.98732;
    char name = '-';
    printf("int: %d\n Float: %f\n Double: %1f\n Char: %c\n", num,num2,num3, name);
 //create float type variabble
 float salary = 35000.68;

 // print the variable
 printf("%f\n", salary);
 //use float notation
 float notation= 76.98f;
 //print the notation variable
 printf("notation: %f\n", notation);

 // character variable diclare
 char letter = 't';

 // print character variable
 printf("char: %c", letter);

// create two variables

float rice_price = 45.87;
char alphabet = 'y';

// print two variables
// print new line
// with a space in between
printf("%f ", rice_price);
printf("\n");
printf("%c\n", alphabet);

// change the variable value which is already stored

// create a new variable

char letters = 'a';
printf("%c\n", letters);

// assign a new variable

letters = 'b';

printf("%c", letters);

printf("\n");
// value transger one variable to another variable

int number3 = 33;
printf("%d", number3);

int number4 = 45;

//assign value stored in number 4 to number3
number3 = number4;

printf("\n");

// print the new value of number3
printf("%d", number3);
printf("\n");
// create multiple variable together
int mobilePrice = 35000, laptopPrice = 45000;

printf("%d", mobilePrice);
printf("\n");
printf("%d\n", laptopPrice);

// boolean variable;

bool var1 = true;
bool var2 = false;

//print those variables;
printf("%d\n%d", var1,var2);

// check student pass or not by boolean variable;
 int studentScore = 38;
 int passingScore = 40;

 bool result = studentScore >= passingScore;

 printf("\n");
 printf("%d\n", result);


return 0;
}
