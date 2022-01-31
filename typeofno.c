#include <stdio.h>
#include <conio.h>

int main()
{
 float a;
 printf("Enter your number: ");
 scanf("%f", &a);

 if (a == 0)
 {
  printf("Your number is zero");
 }
 else if (a < 0)
 {
  printf("Your number is negative.", a);
 }
 else
 {
  printf("Your number is positive.", a);
 }

 // if( a>0 )
 // {
 //  printf("Your number is positive." ,a);

 // }

 // if ( a==0){
 //   printf("Your number is zero." ,a);

 // }
 return 0;
}