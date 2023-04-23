#include "main.h"
/**
 * print_int - prints an integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_int(va_list l, flags_t *f)
{
int n = va_arg(l, int), res;
unsigned int d = 0, u, n1, divisor = 1;
if (n < 0)
u = n * -1;
else
u = n;
while (u != 0)
{
u /= 10;
d++;
}
res = d;
if (f->space == 1 && f->plus == 0 && n >= 0)
res += _putchar(' ');
if (f->plus == 1 && n >= 0)
res += _putchar('+');
if (n <= 0)
res++;
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
return (res);
}
