#include <stdio.h>
#include <stdbool.h>
int main (){

  /*
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

    //comparison operator

    int number11 =32;
printf("\n");
 // 32 equals to 32 is true (1)
 bool result4 = (number11 == 32);
 printf("true: %d\n", result4);

 // 32 not equal to 32 is false (0)
bool result5 = (number11 != 32);
printf("False: %d\n", result5);

// 32 equal to 40 is false (0)

bool result6 = (number11 >= 40);
printf("false: %d\n", result6);

//32 not equal to 40 is true (1)
bool result7 = (number11 != 40);
printf("true: %d\n", result7);

 // comparison operator with floating number;
  // 21 equals to 21.0 is true
  int number12 = 21;
  printf("its true: %d\n", 21.0 == number12);

  // 21.0 not equals to 21 is false
  printf("it's false: %d\n", 21.0 != number12);

  // 20.99 equals to 21 is false
  printf("it is false: %d\n", 20.99 >= number12);

  // 21 not equals to 20.99 is true
  printf("it's ture: %d", 20.99 <= number12);
    return 0;
*/

    //if statement

 /*int k;
    scanf("%d", &k);

    if(k >= 100){
        printf("I will eat burger");
    }else if(k > 50){
        printf("I will eat puchka");
    }else
    {
        printf("I can not eat anything");
    }
*/   

    int h;
    scanf("%d", &h);
    if(h >= 5000){
        printf("I will go cox's bazar \n");
        if(h >= 10000){
            printf(" I will go sant martin also \n");
            if(h >= 15000){
                printf("I will take AC Rooms Hotel");
            }else{
                printf("I will take non ac rooms hotel");
            }
        }else{
            printf("Then I will get back \n");
        }
    }else{
        printf("I won't go anywhere \n");
    }
    return 0;



}
