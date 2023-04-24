#include "main.h"

/**
 * print_S - prints a string while non-printable chars
 * (ASCII code < 32 or >= 127)
 * are printed as \x followed by the ASCII code value in uppercase hexadecimal
 * (always with 2 characters)
 * @args: a va_list of arguments containing the string to be printed
 * @f: flag struct
 * Return: the number of characters printed
 */
int print_S(va_list args, flags_t *f)
{
char *str = va_arg(args, char *);
int i, count = 0;

(void)f;
if (str == NULL)
str = "(null)";
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
count += _putchar('\\');
count += _putchar('x');
count += _putchar('0' + (str[i] / 16) % 16 +
((str[i] / 16) % 16 >= 10 ? 7 : 0));
count += _putchar('0' + str[i] % 16 +
(str[i] % 16 >= 10 ? 7 : 0));
}
else
{
count += _putchar(str[i]);
}
}
return (count);
}
