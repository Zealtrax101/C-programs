#include <stdio.h>
#include <conio.h>
int main()
{
	int r;
	float pi=3.141592653;
	float vol;
	clrscr();


	printf("Enter the radius of the sphere: ");
	scanf("%d", &r);
	clrscr();

	vol = (4.0/3.0)*pi*r*r*r;
	printf("The volume of the sphere is %f. ", vol);
	return 0;
}