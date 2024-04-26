#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /*

  printf("Recently I heard that you\'ve achieved 95% marks in your exam.\nThis is brilliant! \nI wish you\'ll shine in your life!\tGood luck with all the barriers(/\\) in your life.");
  printf("\n");
  putchar(63);  // Print the character with ASCII code 63 (question mark)
  printf("\n");

  // Operator challenge;

  int a, b;
  printf("Enter the first number \> 5: ");
  scanf("%d", &a);
  printf("Enter the second number \> 2: ");
  scanf("%d", &b);
  int addition  = a+b;
  int subscription= a-b;
  int multification = a*b;

  int x, y;

  printf("enter for mud: ");
  scanf("%f", &x);
  scanf("%f", &y);
  float division = x%y;
  printf("5\+2= %d\n 5\-2= %d\n 5\*2= %d\n %f", addition,subscription,multification,division);


  return 0;



  int A;
  int B;
  int sum;

  scanf("%d", &A);
  scanf("%d", &B);

  sum = A+B;
  printf("%d",sum);




 int N;
 scanf("%d", &N);
 int j = 0;

 if( 1 <= N && N <= 1000){

  while(j < N){
    printf("I Love Practice \n");
    j++;
  }
 }else{
  printf("Invalid Number");
 }
 return 0;


 int A;
 long long int B;
 float C;
 char D;

 scanf("%d", &A);
  scanf("%lld", &B);
  scanf("%f", &C);
  scanf("%c", &D);

  printf("%d\n %lld\n %.2f\n %c", A, B, C, D);


printf("Hello, world! I am learning C programming language. ^_^\nProgramming is fun and challenging. /\\/\\/\\\nI want to give my 100% dedication to learn!\tI will succeed one day.");

  problem - 2 in assignment - 1

  long long A;
  long long B;

  scanf("%lld", &A);
  scanf("%lld", &B);

  if (A >= -10 ^ 9 && B <= 10 ^ 9)
  {
    int sum = A * B;
    printf("%d", sum);
  }
  else
  {
    printf("nothing is here");
  }
  long long int A;
  long long int B;

  scanf("%lld", &A);
  scanf("%lld", &B);

  if (A >= -1000000000 && B <= 1000000000)
  {
    int sum = A * B;
    printf("%d", sum);
  }
  else
  {
    printf("nothing is here");
  }
  return 0;
}
// problem -3 in assignment - 1 (solved)
int N;
scanf("%d",&N);

if(0 <= N && N <= 10^9){
if(N%3==0){
  printf("YES");
}else{
  printf("NO");
}
}else{
printf("nothing");
}

// problem - 4 in assignment - 1 (solved)
  int N;
  scanf("%d", &N);

  while (21 <= N && N <= 10000)
  {
    int i = 1;
    while (i <= N)
    {
      if (i % 3 == 0 && i % 7 == 0)
      {
        printf("%d\n", i);
      }
      i++;
    }
    return 0;
    // executive code for parent while
    // increment or decrement operator

    }
*/
  // problem - 5 in assignment - 1

  long long int N;

  scanf("%lld", &N);

  if (1 <= N && N <= 2147483648)
  {
    if (N > 1000 && N < 1500)
    {
      printf("I will buy Punjabi");
    }
    else if (N >= 1500)
    {
      printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }
    else
    {
      printf("Bad luck!");
    }
  }
  else
  {
    return 0;
  }
}
