#include <stdio.h>
#include <conio.h>
int fib(int f);
int main()
{ 
 int f = 1;
 printf("the fibonacci numbers are %d", fib(f));
 return 0;
}
int fib(int f)
{
 return (fib(f - 1) + fib(f - 2));
}
