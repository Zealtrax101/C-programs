#include <stdio.h>
#include <conio.h>
int main()
{
	int principal, rate, years;
	int simpleinterest;
	clrscr();

	printf("Enter the principal amount: ");
	scanf("%d", &principal);
	printf("Enter the rate: ");
	scanf("%d", &rate);
	printf("Enter number of years: ");
	scanf("%d", &years);
	clrscr();

	simpleinterest = (principal * rate * years) / 100;
	printf(" The Simple Interest is %d \n ", simpleinterest);

	return 0;
}