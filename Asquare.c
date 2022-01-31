#include <stdio.h>
#include <conio.h>
int main()
{
	int length;
	int area;
	clrscr();

	printf("Enter the length of the square: ");
	scanf("%d", &length);
	clrscr();

	area = length * length;
	printf("The area of the square is %d ", area);
	return 0;
}