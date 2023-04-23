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
int n = va_arg(l, int);
unsigned int n1;
int res = 0;

if (n < 0)
{
_putchar('-');
n1 = -n;
}
else
n1 = n;
res += count_digit(n1);
if (f->space == 1 && f->plus == 0 && n >= 0)
res += _putchar(' ');
if (f->plus == 1 && n >= 0)
res += _putchar('+');
if (n == 0)
{
res += _putchar('0');
return (res);
}
while (n1 != 0)
{
res++;
_putchar((n1 % 10) + '0');
n1 /= 10;
}
return (res);
}
