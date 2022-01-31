#include <stdio.h>
#include <conio.h>

void changeVal(int a, float *change)
{
 *change = (float)a * 10;
}

int main()
{
 int a;
 float change;
 printf("Enter the value of a: ");
 scanf("%d", &a);
 changeVal(a, &change);
 printf("The value of a ten times is %f ", change);

 return 0;
}