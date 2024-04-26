#include <stdio.h>
int main(){

    //type conversion automatically in c programming, it's called implicit type conversion;
     double number;

     number = 6;

     printf("%1f\n", number);

     int number2;

     //assign double value to integer variable
     number2 = 89.65;
     printf("%d\n", number2);

     // create two variables
    int number3 = 34;
    double number4 = 54.9;

    // add number3 and number4
    double result = number3 + number4;

    // print the result
    printf("%1f", result);

    //Explicit Type Conversion which is manually

    int number6 = 10;
    int number7 = 4;
    double results;

    //(double) convert number6 to double;
    results =(double) number6 / number7;
    printf("\n");
    printf("%.2lf\n", results);



     return 0;

     // create a double variable number
    double number9 = 18.7;

    // declare an int variable result
    int results;

    // convert number to int and add 5 and store sum in result
    double sum = (int) number9 + 5;
    results = sum;

   // print result
    printf("%d", result);

    return 0;


}
