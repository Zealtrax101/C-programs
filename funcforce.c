#include <stdio.h>
#include <conio.h>
float force(float m);
int main()
{
 float m;
 printf("Enter the mass of the object: ");
 scanf("%f", &m);
 printf("The total amount of force exerted on the object is %f", force(m));

 return 0;
}
float force(float m)
{
 float result = m * 9.8;
 return result;
}
