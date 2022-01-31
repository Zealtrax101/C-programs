#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b);
int main()
{
 int a, b;
 printf("Enter your first number: ");
 scanf("%d", &a);
 printf("Enter your second number: ");
 scanf("%d", &b);
 printf("Value of A & B before swapping is %d and %d.\n ", a, b);
 swap(&a, &b);
 printf("Value of A & B after swapping is %d and %d.\n ", a, b);

 return 0;
}
void swap(int *a, int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
