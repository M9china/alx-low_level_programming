#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
	int n, ldi;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	ldi = n % 10;

	printf("Last digit of %d is ", n);

	if (ldi > 5)
	{
		printf("%d and is greater than 5\n", ldi);
	}
	else if (ldi == 0)
	{
		printf("%d and is 0\n", ldi);
	}
	else if (ldi < 6 && ldi != 0)
		printf("%d and is less than 6 and not 0\n", ldi);

	return (0);
}
