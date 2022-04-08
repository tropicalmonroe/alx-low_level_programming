#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
	char lc;
	char uc;

	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}

	putchar('\n');

	return (0);

}
