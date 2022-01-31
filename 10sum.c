#include <stdio.h>
#include <conio.h>
int main ()
{
	int i,n=10,sum=0;
	printf("SUM OF FIRST 10 NATURAL NUMBERS \n");
		printf("---------------------------\n");
	for( i=1 ;i<=n;i++)
	{
		sum +=i;
	}
	printf("sum of first 10 natural numbers is %d",sum);
	return 0;
}