#include <stdio.h>
#include <conio.h>
int main ()
{
	int n,num;
	printf("Multiplication table \n");
		printf("---------------------------\n");
	printf("Enter your number: ");
	scanf("%d", &num);
	for( int i=1 ;i<11;i++)
	{
		printf("%d X %d = %d \n",num, i ,num*i);
	}
	return 0;
}