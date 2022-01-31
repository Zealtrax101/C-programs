#include<stdio.h>
#include<conio.h>

int main(){
 int age;
 printf("Enter your Age: ");
 scanf("%d" ,&age);

 if(age>=18){
  printf("You can legally drive.");

 }
 else{
    printf("You cannot legally drive.");

 }
 return 0;
}