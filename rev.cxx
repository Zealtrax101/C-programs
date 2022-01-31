#include<stdio.h>
#include<math.h>
int main()
{
    int n,r;
    printf("Enter a Number: ");
    scanf("%d", &n);
    

  int num = 0;
    while(n>0)
    {

        r = n % 10;
        n = n / 10;
        num = num*10 + r;
    }
    printf("%d",num);
    }