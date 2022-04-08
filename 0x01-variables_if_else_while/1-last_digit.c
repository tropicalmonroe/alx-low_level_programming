#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n % 7 > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, n % 7);
	}

	else if (n % 7 == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, n % 7);
	}

	else
	{
		printf("last digit of %d is %d and is less than 6\n", n, n % 7);
	}

	return (0);
}
