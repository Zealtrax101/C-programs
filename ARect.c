#include<stdio.h>
#include<conio.h>
int main()
{
	int length,breadth;
	int area;
	clrscr();
	printf("Enter the length: ");
	scanf("%d" ,&length);
	
	printf("Enter the breadth: ");
	scanf("%d",&breadth);
	area = length*breadth;
	
printf("The area of the rectangle is %d ", area);
 return 0;
}	