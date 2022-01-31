#include <stdio.h>
#include <conio.h>
void address(int *a);
int main()
{
 int a = 5;
 printf("The address of a is %u.\n", &a);
 address(&a);
 return 0;
}
void address(int *a)
{
 printf("The address of *a is %u.\n", &(*a));
}
