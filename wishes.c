#include <stdio.h>
#include <conio.h>

void gm();
void ga();
void gn();

int main()
{
 printf("------Wishes------\n");
 printf("1. ");
 gm();
 printf("2. ");
 ga();

 printf("3. ");
 gn();

 return 0;
}

void gm()
{
 printf("GOOD MORNING \n");
}
void ga()
{
 printf("GOOD AFTERNOON \n");
}
void gn()
{
 printf("GOOD NIGHT \n");
}