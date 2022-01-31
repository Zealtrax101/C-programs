#include <stdio.h>
#include <conio.h>

void display();

int main()
{
 int i = 2;
 printf("the value of i si %d.\n", i);
 printf("starting function.\n");

 display();
 printf("function ended.\n");

 return 0;
}

void display()
{
 printf("this is function.\n");
 printf("HELLO WORLD .\n");
}