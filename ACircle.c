#include <stdio.h>
#include <conio.h>
int main()
{
	int r;
	float pi = 3.14;
	clrscr();
	printf("Enter the radius: ");
	scanf("%d", &r);

	printf("The area of the circle is %f ", pi * r * r);
	return 0;
}