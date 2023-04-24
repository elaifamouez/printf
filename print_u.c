#include "main.h"

/**
 * print_u - prints an unsigned int
 * @args: argument
 * @f: flag struct
 * Return: number of characters printed
 */
int print_u(va_list args, flags_t *f)
{
int i = 0;
int j = 1;
unsigned int num = va_arg(args, unsigned int);

(void)f;
while (num / j > 9)
{
j *= 10;
}
while (j > 0)
{
_putchar(num / j + '0');
i++;
num %= j;
j /= 10;
}
return (i);
}
