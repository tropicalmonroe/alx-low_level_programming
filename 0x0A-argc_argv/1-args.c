#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	return (0);
}
