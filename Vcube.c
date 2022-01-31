#include <stdio.h>
#include <conio.h>
int main()
{
	int length;
	int vol;
	clrscr();


	printf("Enter the length of the cube: ");
	scanf("%d", &length);
	clrscr();

	vol = length * length*length;
	printf("The volume of the cube is %d. ", vol);
	return 0;
}