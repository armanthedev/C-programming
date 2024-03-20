#include <stdio.h>
// 1 kilometer = 0.621 miles

int main(){

    double  km;
    double  miles;

    //conversion rate = 0.621;

    double conversionRate = 0.621;

    printf("Please Enter the distance in Km: ");
    scanf("%lf", &km);

    miles = km*conversionRate;
    printf("%lf", miles);

    return 0;

}
