#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
unsigned int n1, divisor = 1;

if (n < 0)
{
_putchar('-');
n1 = -n;
}
else
{
n1 = n;
}
while (n1 / divisor > 9)
{
divisor *= 10;
}
while (divisor != 0)
{
_putchar((n1 / divisor) +'0');
n1 %= divisor;
divisor /= 10;
}
}

