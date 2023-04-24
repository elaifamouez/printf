#include "main.h"

/**
 * print_p - prints pointers
 * @args: argument
 * @f: flag struct
 * Return: number of characters printed
 */
int print_p(va_list args, flags_t *f)
{
char *str;
unsigned long int p = va_arg(args, unsigned long int);
register int count = 0;

(void)f;
if (!p)
return (_puts("(nil)"));
str = print_x_helper(p, 16, 1);
count += _puts("0x");
count += _puts(str);
return (count);
}
