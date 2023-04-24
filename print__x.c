#include "main.h"

/**
 * print__x - prints the hexadecimal representation of a decimal number
 * @args: argument
 * @f: flag struct
 * Return: number of characters printed
 */
int print__x(va_list args, flags_t *f)
{
int i = 0, j = 0;
int arr[sizeof(int) * 2 + 1];
unsigned int num = va_arg(args, unsigned int);
char hex_digits[] = "0123456789abcdef";

(void)f;
if (num == 0)
{
_putchar('0');
j++;
return (j);
}
while (num > 0)
{
arr[i] = num % 16;
num /= 16;
i++;
}
while (i > 0)
{
i--;
_putchar(hex_digits[arr[i]]);
j++;
}
return (j);
}
