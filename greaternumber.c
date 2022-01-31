#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,num3;
	
	printf("Enter any three numbers:\n  ");
	scanf("%d %d %d",&num1, &num2 ,&num3);
	
	if(num1>num2 && num1>num3){
		printf("the greater number is %d",num1);
	}
	else if(num2>num3){
			printf("the greater number is %d",num2);
	}
	else{
			printf("the greater number is %d",num3);
	}
 return 0;
}	