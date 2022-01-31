#include <stdio.h>
#include <conio.h>

int main()
{
 int i = 33;
 int *j = &i;
 printf("value of i is %d.\n", i);
 printf("value of j is %u.\n", *(&j));
 printf("address of i is %u.\n", j);
 printf("address of i is %u.\n", &i);

 printf("address of j is %u.\n", &j);

 return 0;
}