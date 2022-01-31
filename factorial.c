#include <stdio.h>
#include <conio.h>
int main ()
{
	int i=0,n,fact=1;
	printf("      FACTORIAL\n");
		printf("---------------------------\n");
		printf("Enter the number: ");
		scanf("%d",&n);
	for( i=1 ;i<=n;i++)
	{
		fact *=i;
	}
	printf("The Factorial of %d is %d",n,fact);
	return 0;
}