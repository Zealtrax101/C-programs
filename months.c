#include <stdio.h>
#include <conio.h>

int main()
{
 int month;

 printf("Enter the month number: ");
 scanf("%d", &month);

 switch (month)
 {
 case 1:
  printf("Your month is January.");
  break;
 case 2:
  printf("Your month is February.");
  break;
 case 3:
  printf("Your month is March.");
  break;
 case 4:
  printf("Your month is April.");
  break;
 case 5:
  printf("Your month is May.");
  break;
 case 6:
  printf("Your month is June.");
  break;
 case 7:
  printf("Your month is July.");
  break;
 case 8:
  printf("Your month is August.");
  break;
 case 9:
  printf("Your month is September.");
  break;
 case 10:
  printf("Your month is October.");
  break;
 case 11:
  printf("Your month is November.");
  break;
 case 12:
  printf("Your month is December.");
  break;

 default:
  printf("Invalid Input");
  break;
 }
 return 0;
}