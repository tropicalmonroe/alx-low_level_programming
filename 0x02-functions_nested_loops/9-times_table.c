
#include "main.h"
/**
 * times_table -prints tables
 *
 * Return: Always 0.
 */
void times_table(void)

{
int a;
int b;
int x;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
x = a * b;
if ((x / 10) == 0)
{
if (b == 0)
{
_putchar ('0');
}
if (b != 0)
{
_putchar (' ');
_putchar ((x % 10) + '0');
}
if (b < 9)
{
_putchar(',');
_putchar (' ');
}
}
else
{
_putchar ((x / 10) + '0');
_putchar ((x % 10) + '0');
if (b < 9)
{
_putchar(',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}
