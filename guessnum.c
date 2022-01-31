#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numb, guess, attempts = 1;
	srand(time(0));
	numb = rand() % 100 + 1;
	//printf("the number is %d", numb);
	do
	{
		printf("Guess the number between 1 to 100:\n");
		scanf("%d", &guess);
		if (guess > numb)
		{
			printf("Enter lower number please!\n");
		}
		else if (guess < numb)
		{
			printf("Enter higher number please!\n");
		}
		else
		{
			printf("wow you guessed the right number in %d attempts!\n", attempts);
		}
		attempts++;
	} while (guess != numb);
}