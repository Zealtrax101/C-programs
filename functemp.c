#include <stdio.h>
#include <conio.h>
float temp(float c);
int main()
{
 float c;
 printf("Enter the temprature in celsius: ");
 scanf("%f", &c);
 printf("The temprature in Fahreinheit is %f", temp(c));

 return 0;
}

float temp(float c)
{
 float f;
 f = (c * 9 / 5) + 32;
 return f;
}
