#include "main.h"

/**
 * print_o - prints the octal representation of a decimal number
 * @args: argument
 * @f: flag struct
 * Return: number of characters printed
 */
int print_o(va_list args, flags_t *f)
{
int j = 0;
unsigned int num = va_arg(args, unsigned int);
int arr[sizeof(int) * 8 + 1];
int i = 0;

(void)f;
if (num < 8)
{
_putchar(num + '0');
j++;
return (j);
}
else
{
while (num > 8)
{
arr[i] = num % 8;
num /= 8;
i++;
}
if (num < 8)
arr[i] = num;
while (i >= 0)
{
_putchar(arr[i] + '0');
j++;
i--;
}
}
return (j);
}
