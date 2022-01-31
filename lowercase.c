#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	printf("Enter any alphabet:  ");
	scanf("%c",&ch);
	
	if(ch>=97 && ch<=122){
		printf("the character is lowercase");
	}
	else {
			printf("the character is not lowercase");
	}
 return 0;
}	