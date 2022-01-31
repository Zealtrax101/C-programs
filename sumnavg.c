#include <stdio.h>
#include <conio.h>

void sumNavg(int a, int b, int *sum, float *avg)
{
 *sum = a + b;
 *avg = (float)(*sum) / 2;
}

int main()
{
 int a, b, sum;
 float avg;
 printf("Enter the value of a: ");
 scanf("%d", &a);
 printf("Enter the value of b: ");
 scanf("%d", &b);
 sumNavg(a, b, &sum, &avg);
 printf("The sum of a and b is %d.\n", sum);
 printf("The average of a and b is %f,\n", avg);

 return 0;
}