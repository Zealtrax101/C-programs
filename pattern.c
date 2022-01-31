#include <stdio.h>
#include <conio.h>

void pattern();
int main()
{
 int n = 2;
 pattern(n);
 return 0;
}
void pattern(int n)
{
 if (n == 1)
 {
  printf("*\n");
  return;
 }
 pattern(n - 1);
 {
  for (int i = 0; i < (2 * n - 1); i++)
  {
   printf("*");
  }
  printf("\n");
 }
}
