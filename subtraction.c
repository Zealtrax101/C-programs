#include<stdio.h>
#include<conio.h>
int main()
{
	int num1;
	int num2;
	int result;
   
	
    printf("Enter first number: ");
    scanf("%d" ,&num1);
    
     printf("Enter second number: ");
    scanf("%d" ,&num2);
    
    result = num1 - num2;
	printf("The difference between %d and %d is %d ", num1,num2,result);
	return 0;
 
}	