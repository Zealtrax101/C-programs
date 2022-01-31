#include <stdio.h>
#include <conio.h>
float average(float a, float b, float c);

int main()
{
 float a, b, c;
 printf("Enter the 3 numbers to find their average: ");
 scanf("%f %f %f", &a, &b, &c);

 printf("The value of average is %f", average(a, b, c));

 return 0;
}

float average(float a, float b, float c)
{
 float result = (a + b + c) / 3;
 return result;
}
