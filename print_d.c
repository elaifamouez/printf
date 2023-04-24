#include "main.h"

/**
 * print_d - print a decimal
 * @args: decimal to print
 * @f: flag struct
 * Return: number of characters and digits printed
 */
int print_d(va_list args, __attribute__((unused))flags_t *f)
{
int n = va_arg(args, int);
int num, last = n % 10, digit;
int  i = 1;
int exp = 1;

n = n / 10;
num = n;
if (last < 0)
{
_putchar('-');
num = -num;
n = -n;
last = -last;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}
num = n;
while (exp > 0)
{
digit = num / exp;
_putchar(digit + '0');
num = num - (digit *exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
