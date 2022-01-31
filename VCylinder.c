#include <stdio.h>
#include <conio.h>
int main()
{
	int r;
	float pi = 3.14;
	int h;
	clrscr();
	printf("Enter the radius: ");
	scanf("%d", &r);

	printf("Enter the height: ");
	scanf("%d", &h);
    clrscr();
    
	printf(" The area of the circle is %f \n ", pi * r * r);
	printf("The volume of the cylinder is %f\n", pi * r * r * h);

	return 0;
}