#include <stdio.h>
int main (){

    int number1 = 45;
    int number2 = 56;

    int number3 = number1 + number2;
    //operation in a variable

    printf("%d", number3);

    printf ("\n");

    int number4 = 70;
    int number5 = 56;

    // operation in printf function
    printf("%d\n", number4 - number5);

    // create the costPrice variable and assign 19 to it
    int costPrice = 19;

    // create the sellingPrice variable and assign 27 to it
    int sellingPrice = 27;
    // compute the profit and print it
    int profit = sellingPrice - costPrice;
    printf("%d", profit);
    //new line
    printf("\n");
    // compute the p
    int number8 = 15;
    int number9 = 9;

    // compute the product of number1 and number2
    int product = number8 * number9;
    printf("%d\n", product);


    //division operator

    int result =  12.0/9;
    printf("%d\n", result);

    // division by double number because it will return the exact result
     float doubleReuslt = 12.0 / 8.0;
     printf("%f\n", doubleReuslt);
    //% (modulo) operator returns the remainder after division

    int modulo = 12%8;
    printf("%d\n", modulo);

    // problem solving

    // create variables penNumber and studentNumber
    int penNumber = 14;
    int studentNumber = 3;

    // compute and print the number of pens each student will get
    // hint: find the quotient
    printf("%d\n", penNumber / studentNumber);

    // compute and print the number of pens that will be left
    // hint: find the remainder
    printf("%d", penNumber % studentNumber);

    //increment operator

    int myRoll = 23;
    int mathMarks = 88;

    ++myRoll;
    --mathMarks;

    printf("\n");
    printf("%d", myRoll);
    printf("\n");
    printf("%d", mathMarks);

    //multiple operator

    int x = 9/3+8*4-2;

    printf("\n");
    printf("%d", x);

    // size of operator

    printf("int: %zu bytes", sizeof(x));

    return 0;
}
